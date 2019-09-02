#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int i,j=0, vetor[11];
	for(i=10;i<=20;i++){
		vetor[j]= i;
		j++;
	}
	printf("Números pares: ");
	for(i=10;i>=0;i--){
		if(vetor[i]%2==0){
			printf("%d ",vetor[i]);
		}
	}
	printf("\nNúmeros ímpares: ");
	for(i=0;i<11;i++){
		if(vetor[i]%2==1){
			printf("%d ", vetor[i]);
		}
	}
}
