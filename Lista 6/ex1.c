#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int i, vetor[8], numero;
	bool existe = false;
	for(i=0;i<8;i++){
		vetor[i]= rand()%20;
	}
	printf("Insira um n�mero: ");
	scanf("%d",&numero);
	for(i=0;i<8;i++){
		if(vetor[i] == numero){
			printf("\n Existe na posi��o: %d",i);
			existe = true;
		}
		if(i==7 && existe == false){
			printf("\nO n�mero n�o existe no vetor.");
		}
	}
}
