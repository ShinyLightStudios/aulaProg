#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int area(int base, int altura){
	return (base*altura)/2;
}

int main(void){
	int base,altura;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira 2 numeros: ");
	scanf("%d",&base);
	scanf("%d",&altura);
	printf("�rea do tri�ngulo: %d",area(base,altura));
}
