#include<stdio.h>

int temperature();

int main(){
    int code = temperature();
    printf("\nAlert Code: %d", code);
	return 0;
}

int temperature(){
	int temp;
	printf("Enter current temperature (Celsius): ");
	scanf("%d", &temp);
	
	if(temp > 35){
		printf("HEAT ALERT\n");
		return 1;
	}
	else if(temp < 10){
		printf("COLD ALERT\n");
		return 2;
	}
	else if(temp >= 15 && temp <= 25){
		printf("COMFORT ZONE\n");
		return 3;
	}
	else{
		printf("NORMAL CONDITIONS\n");
		return 4;
	}
}
