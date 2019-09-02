#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int i,vetor1[5], vetor2[5];
	for(i=0;i<5;i++){
		vetor1[i] = i+1;
		vetor2[i] = pow(vetor1[i],3);
	}
	printf("Vetor 1: ");
	for(i=0;i<5;i++){
		printf("%d ",vetor1[i]);
	}
	printf("\nVetor 2: ");
	for(i=0;i<5;i++){
		printf("%03d ",vetor2[i]);
	}
}
