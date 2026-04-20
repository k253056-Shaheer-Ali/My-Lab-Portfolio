#include <stdio.h>

int main(void){
	char room, action;
	
	printf("Select Room (L=living-room, K=kitchen): ");
	scanf(" %c", &room);
	printf("Select Action (L=lights, T=thermostat): ");
	scanf(" %c", &action);
	
	if (room == 'L'){
		if (action == 'L'){
			printf("Adjusting ambient lighting.");
		}
		else if (action == 'T'){
			printf("Setting living room temperature.");
		}
	}
	else if (room == 'K'){
		if (action == 'L'){
			printf("Turning on bright task lighting.");
		}
		else if (action == 'T'){
			printf("Setting kitchen temperature.");
		}
	}
	else{
		printf("Invalid Room!\n");
	}
	
	return 0;
}
