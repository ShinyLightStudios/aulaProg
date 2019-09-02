#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int i, a[20];
	for(i=0;i<20;i++){
		a[i] = 97 + rand()%26;
	}
	printf("Vetor normal: ");
	for(i=0;i<20;i++){
		printf("%d ",a[i]);
	}
	printf("\nVetor com char: ");
	for(i=0;i<20;i++){
		printf("%c ", a[i]);
	}
}
