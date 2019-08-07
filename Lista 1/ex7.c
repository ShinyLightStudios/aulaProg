#include <stdio.h>
#include <stdlib.h>

int main(void){
	float celsius;
	printf("Temperatura: ");
	scanf("%f",&celsius);
	float F= (celsius*9)/5;
	F= F+32;
	printf("Fahrenheit: %f",F);
}
