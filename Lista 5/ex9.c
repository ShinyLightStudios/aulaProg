#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	int i, numero,fatorial=1;
	printf("Insira um numero inteiro: ");
	scanf("%d",&numero);
	if(numero>=0){
		for(i=numero;i>=1;i--){
			fatorial = fatorial*i;
		}
	}
	else{
		for(i=numero;i<=-1;i++){
			fatorial = fatorial*i;
		}
	}
	printf("\n\nFatorial: %d",fatorial);
}
