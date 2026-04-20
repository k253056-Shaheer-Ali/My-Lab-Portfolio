#include <stdio.h>

int main(void){
	
	printf("Quadratic Equation Program\n");
	
	int a,b,c;
	printf("Enter coefficients of quadratic equation (ax² + bx + c)\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	
	int d = (b*b) - (4*a*c);
	
	if (d > 0){
		printf("Two real roots\n");
	}
	else if (d == 0){
		printf("One real root\n");
	}
	else{
		printf("Imaginary roots\n");
	}
	
	return 0;
}
