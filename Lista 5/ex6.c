#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	rand();
	int numero, dezena, centena, milhar;
	numero = 1000 +rand()%9000;
	printf("%d\n\n", numero);
	milhar = numero/1000;
	numero = numero-(milhar*1000);
	centena = numero/100;
	numero = numero-(centena*100);
	dezena = numero/10;
	numero = numero-(dezena*10);
	printf("Unidade:  %d",numero);
	printf("\nDezena:   %d",dezena*10);
	printf("\nCentena:  %d",centena*100);
	printf("\nMilhar:   %d",milhar*1000);
}
