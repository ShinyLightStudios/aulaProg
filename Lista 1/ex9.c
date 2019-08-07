#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	int numero1,numero2;
	float real1;
	printf("Primeiro Numero: ");
	scanf("%d",&numero1);
	printf("Segundo Numero: ");
	scanf("%d",&numero2);
	printf("Numero real: ");
	scanf("%f",&real1);
	printf("\n\nCalculo 1: %d",2*numero1*numero2/2);
	printf("\nCalculo 2: %f", (3*numero1)+real1);
	printf("\nCalculo 3: %f", pow(real1,3));
}
