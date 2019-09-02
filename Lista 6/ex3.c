#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int vetorA[10], vetorB[10], i, j;
	for(i=2;i<=20;i++){
		if(i%2==0){
			vetorA[j] = i;
			j++;
		}
		if(i>=10 && i<20){
			vetorB[i-10] = i;
		}
	}
	printf("Vetor A: ");
	for(i=0;i<10;i++){
		printf("%02d ",vetorA[i]);
	}
	printf("\nVetor B: ");
	for(i=0;i<10;i++){
		printf("%02d ",vetorB[i]);
	}
	printf("\nSoma de A+B: ");
	for(i=0;i<10;i++){
		printf("%02d ",vetorA[i]+vetorB[i]);
	}
}
