//permantly ham apna data store karney ke liye file handling use kartey hein

/* 
Step 1: Create a new file/ Open a file
Step 2: Program operations on a file (read/write)
Step 3: Closing a file
*/

#include<stdio.h>

int main(){
	//STEP 1:
	//fopen hamesha likho ge ya read mode mein ya write mode mein
	//pointer lazmi banana hai to save file
	
	FILE *fptr; //pointer of type file
	fptr = fopen("demo.txt","w");  //ab sarey actions jo perform karein ge woh writing ke hongey
	
	//STEP 2: Perform actions on a file
	//===============WRITE===============
	//character placing:  fputc('character', file path);   file path is acutally the address/pointer
	fputc('a', fptr);
	//string placing: fputs("string", file path);
	fputs("\nThis is string\n", fptr);
	
	int id;
	printf("Enter ID: ");
	scanf("%d", &id);
	fprintf(fptr, "ID: %d\n", id);
	
	char name[20];
	printf("Enter Name: ");
	getchar();
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';
	fprintf(fptr, "Name: %s", name);
	printf("File updated successfully");
	
	//NOTE: writing mode mein file kholney se previous data khatam hojata hai, to fix this open file in append mode
	
	//================READ==================
	//fgetc(fptr)  //reading character
	//fscanf(fptr) //reading word
	//fgets(fptr)  //line read
	
	if(fptr==NULL){
		printf("File not found");
	}
	
	char c;
	while((c = fgetc(fptr))!=EOF){
		printf("%c", c);
	}
	
	
	//STEP 3: Closing a file
    fclose(fptr);
	return 0;
}
