#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	FILE *arquivo;
	int i, numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	arquivo = fopen("numerosAleatoriosEX1.txt", "w");
	for(i=1;i<=100;i++){
		numero = -100 + rand()%200;
		fprintf(arquivo,"%d\n", numero);
	}
}
