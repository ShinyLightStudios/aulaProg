#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int piso(float numero){
	int num = numero;
	printf("Piso: %d\n",num);
}
int teto(float numero){
	int num = numero;
	printf("Teto: %d\n",num+1);
}


int main(void){
	float numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira um numero real: ");
	scanf("%f",&numero);
	piso(numero);
	teto(numero);
}
