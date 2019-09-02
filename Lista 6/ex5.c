#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int vetor[4],i;
	printf("Vetor: ");
	for(i=0;i<4;i++){
		vetor[i] = rand()%2;
		printf("%d ",vetor[i]);
	}
}
