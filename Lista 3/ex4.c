#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	int areaChute, areaDefesa;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("===================");
	printf("\n|  1  |  2  |  3  |");
	printf("\n|  4  |  5  |  6  |");
	printf("\n|  7  |  8  |  9  |");
	printf("\n ^^^^^^^^O^^^^^^^^");
	printf("\n ^^^    /|\\  ^^^^\n  ^^    / \\   ^^^^^");
	printf("\n\n\n\nEscolha entre as áreas de 1 a 9 para chutar ao gol!");
	printf("\nEscolha: ");
	scanf("%d",&areaChute);
	areaDefesa= 1 + rand() % 9;
	if(areaChute == areaDefesa){
		printf("O Computador defendeu seu chute!");
	}
	else if(areaChute != areaDefesa){
		printf("Você fez um gol!!!");
	}
	else{
		printf("Você chutou para fora do gol!");
	}
}
