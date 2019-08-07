#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	int classe, territorio,arma;
	setlocale(LC_ALL,"");
	printf("--Escolha uma classe--");
	printf("\n1- Guerreiro \n2-Mago\n3-Druida\n4-Sacerdote\n\nEscolha: ");
	scanf("%d",&classe);
	printf("\n\n--Escolha um terrotorio inicial--");
	printf("\n1- Azeroth\n2-Azkaban\n3-Aurora\n4-Brightwood\n\nEscolha: ");
	scanf("%d",&territorio);
	printf("\n\n--Escolha uma arma inicial--");
	printf("\n1-Machado Cego\n2-Picareta Invertida\n3-Adaga sem ponta\n4-Corrente sem elo\n\nEscolha: ");
	scanf("%d",&arma);
	printf("\n\nVocê agora é um ");
	if(classe==1){
		printf("Guerreiro");
	}
	else if(classe==2){
		printf("Mago");
	}
	else if(classe==3){
		printf("Druida");
	}
	else if(classe==4){
		printf("Sacerdote");
	}
	else{
		printf("Forasteiro");
	}
	printf(" do Territorio ");
	if(territorio == 1){
		printf("de Azeroth");
	}
	else if(territorio==2){
		printf("de Azkaban");
	}
	else if(territorio == 3){
		printf("de Aurora");
	}
	else if(territorio == 4){
		printf("de Brightwood");
	}
	else{
		printf("desconhecido");
	}
	printf(" armado com ");
	if(arma==1){
		printf("um Machado Cego!");
	}
	else if(arma==2){
		printf("uma Picareta Invertida!");
	}
	else if(arma==3){
		printf("uma Adaga sem Ponta!");
	}
	else if(arma==4){
		printf("uma Corrente sem elo!");
	}
	else{
		printf("uma arma desconhecida!");
	}
}
