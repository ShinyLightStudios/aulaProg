#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	float valor;
	int dias;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira o valor aplicado: ");
	scanf("%f",&valor);
	printf("\nInsira a quantidade de dias: ");
	scanf("%d",&dias);
	if(dias>0 && dias<=180){
		printf("\n\nO valor do imposto é: %0.2f",valor*0.225);
	}
	else if(dias>180 && dias<=360){
		printf("\n\nO valor do imposto é: %0.2f",valor*0.20);
	}
	else if(dias>360 && dias<720){
		printf("\n\nO valor do imposto é: %0.2f",valor*0.175);
	}
	else if(dias>720){
		printf("\n\nO valor do imposto é: %0.2f",valor*0.15
		);
	}
}
