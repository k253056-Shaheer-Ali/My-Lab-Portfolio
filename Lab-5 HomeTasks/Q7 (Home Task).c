#include <stdio.h>

int main(void){
	
	const int READ = 1;     //001 in binary
	const int WRITE = 2;    //010 in binary
	const int EXECUTE = 4;  //100 in binary
	
	int permissions;
	//READ:1 (001), WRITE:2 (010), EXECUTE:4 (100)
	//permissions for all read,write and execute
	// total=1+2+4 =7
	permissions = 7;       //You can change the value for different scenarios
	
	if (permissions & EXECUTE){
		printf("Access granted: full control");
	}
	else{
		if ((permissions & READ) && (permissions & WRITE)){
			printf("Access granted: read and write");
		}
		else if (permissions & READ){
			printf("Access granted: read only");
		}
		else{
			printf("Access denied");
		}
	}
	
	return 0;
}
