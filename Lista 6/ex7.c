#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int vetor[4],i,j=0, decimal=0, numero=0;
	int acertos=0, erros=0;
	
	while(erros<3){
		system("cls");
		decimal = 0;
		j=0;
		printf("Numero Binário: ");
		for(i=0;i<4;i++){
			vetor[i] = rand()%2;
			printf("%d",vetor[i]);
		}
		for(i=3;i>=0;i--){
			decimal = decimal + (vetor[j]*pow(2,i));
			j++;
		}
		printf("\nDigite a conversão desse número binário para decimal: ");
		scanf("%d", &numero);
		if(numero==decimal){
			printf("\nCorreto!\n");
			system("pause");
			acertos++;
		}
		else{
			printf("\nErrado!\n");
			system("pause");
			erros++;
		}
	}
	
	printf("Número de acertos: %d\nNúmero de Erros: %d",acertos,erros);
}
