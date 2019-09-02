#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int i, vetor[8],contador=0,soma,soma_Todos;
	for(i=0;i<8;i++){
		vetor[i] = 1 + rand()%49;
		if(vetor[i]>30){
			contador++;
			soma = soma+vetor[i];
		}
		soma_Todos = soma_Todos + vetor[i];
	}
	printf("Vetor: ");
	for(i=0;i<8;i++){
		printf("%02d ", vetor[i]);
	}
	printf("\nQuantidade de numeros maiores que 30: %d", contador);
	printf("\nSoma dos numeros maiores que 30: %d", soma);
	printf("\nSoma de todos os numeros: %d", soma_Todos);
}
