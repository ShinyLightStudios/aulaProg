#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int vetor[4],i,j=0, decimal=0;
	printf("Vetor: ");
	for(i=0;i<4;i++){
		vetor[i] = rand()%2;
		printf("%d ",vetor[i]);
	}
	for(i=3;i>=0;i--){
		decimal = decimal + (vetor[j]*pow(2,i));
		j++;
	}
	printf("\nDecimal: %d", decimal);
}
