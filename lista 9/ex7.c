#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
void comparador(char a, char b){
	printf("%d, %d\n",a,b);
	
	if(b>a){
		printf("O numero de caracteres entre elas é: %d",b-a);
	}
	else{
		printf("O numero de caracteres entre elas é: %d",a-b);
	}
}

int main(void){
	char a, b;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira duas letras do alfabeto: ");
	scanf(" %c",&a);
	scanf(" %c",&b);
	comparador(a,b);
}
