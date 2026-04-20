#include <stdio.h>

int main(void){
	
	int powerOn;
	char lightColor;
	
	printf("Is power on? (1=on , 0=off): \n");
	scanf("%d", &powerOn);
	
	printf("Light color (R=red ,Y=yellow ,G=green ): \n");
	scanf(" %c", &lightColor);
	
	if (powerOn==1){
		if(lightColor=='R' || lightColor=='r'){
			printf("Stop!\n");
		}
		else if (lightColor=='Y' || lightColor=='y'){
			printf("Caution!\n");
		}
		else if (lightColor=='G' || lightColor=='g'){
			printf("Go!\n");
		}
		else{
			printf("Invalid light color!\n");
		}
	}
	else{
		printf("Signal Off!");
	}
	
	return 0;
}
