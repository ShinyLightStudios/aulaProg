#include <stdio.h>
#include <stdlib.h>

int main(void){
	float F;
	printf("Fahrenheit: ");
	scanf("%f",&F);
	float celsius = 5*(F-32)/9;
	printf("Celsius: %f",celsius);
}
