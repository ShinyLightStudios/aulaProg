#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int letra_alfabeto(char letra){
	if (letra>=97 && letra <=122){
		return 1;
	}
	else{
		return 0;
	}
	return letra;
}

int main(void){
	int check;
	char letra,lower;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira um caractere: ");
	scanf("%c", &letra);
	lower = tolower(letra);
	check = letra_alfabeto(lower);
	printf("%c -> %d",letra, check);
}
