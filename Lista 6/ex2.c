#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int vetor[10],i,j=0;
	for(i=2;i<=20;i++){
		if(i%2==0){
			vetor[j] = i;
			j++;
		}
	}
	for(i=0;i<10;i++){
		printf("%02d ",vetor[i]);
	}
}
