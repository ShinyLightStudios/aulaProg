#include <stdio.h>
#include <stdlib.h>

int main(void){
	float tamanho, velocidade;
	printf("\nQual o tamanho do arquivo?(Em MB): ");
	scanf("%f",&tamanho);
	printf("\nQual a velocidade do link de internet?(Em mbps): ");
	scanf("%f",&velocidade);
	printf("\nO tempo demorado para baixar e: %f minutos", tamanho/velocidade/60);
}
