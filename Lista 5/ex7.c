#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	int i,j,numero;
	printf("Insira um número inteiro positivo: ");
	scanf("%d",&numero);
	printf("\n");
	for(i=1;i<=numero;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}
