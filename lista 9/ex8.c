#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

float media(float a,float b,float c){
	return (a+b+c)/3;
}

int main(void){
	float a,b,c;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira 3 numeros: ");
	scanf(" %f",&a);
	scanf(" %f",&b);
	scanf(" %f",&c);
	printf("A média é: %0.2f",media(a,b,c));
}
