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
		printf("Numero Bin�rio: ");
		for(i=0;i<4;i++){
			vetor[i] = rand()%2;
			printf("%d",vetor[i]);
		}
		for(i=3;i>=0;i--){
			decimal = decimal + (vetor[j]*pow(2,i));
			j++;
		}
		printf("\nDigite a convers�o desse n�mero bin�rio para decimal: ");
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
	
	printf("N�mero de acertos: %d\nN�mero de Erros: %d",acertos,erros);
}
