#include <stdio.h>
#include <stdlib.h>

int main(void){
	float salario;
	int hora;
	printf("Salario por hora: ");
	scanf("%f", &salario);
	printf("Quantas horas trabalha por mes: ");
	scanf("%d", &hora);
	
	printf("----- Salario -----");
	printf("\nSalario Bruto: %f",salario*hora);
	printf("\nImposto de Renda: %f", salario*hora*0.11);
	printf("\nPago ao INSS: %f",salario*hora*0.08);
	printf("\nPago ao sindicato: %f", salario*hora*0.05);
	printf("\nSalario Liquido: %f", (salario*hora)-(salario*hora*0.11)-(salario*hora*0.08)-(salario*hora*0.05));
}
