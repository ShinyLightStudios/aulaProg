#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int opcao;
	printf("********************");
	printf("\n* Jogo da Floresta *");
	printf("\n********************");
	printf("\n\nVoc� dormiu e acordou no meio de uma floresta, o que voc� quer fazer?");
	printf("\n1- Seguir para Norte");
	printf("\n2- Seguir para Sul");
	printf("\n3- Seguir para Leste");
	printf("\n4- Seguir para Oeste");
	printf("\n5- Ficar parado");
	printf("\n\nEscolha: ");
	scanf("%d",&opcao);
	if(opcao == 1){
		printf("\n\nVoc� seguiu para norte, andando por uma parte fria da floresta.\nQuando decidiu se abaixar para pegar cogumelos, um gigante de gelo pisou em voc�.\nQue morte triste!");
	}
	else if(opcao == 2){
		printf("\n\nVoc� seguiu ao sul, uma parte mais quente e viva da floresta foi se desabrochando.\nDepois de algumas horas de caminhada, voc� chegou ao vale das fadas.\nMas... Elas estavam com fome e te fizeram de ensopado!\nQue morte ensopada!");
	}
	else if(opcao == 3){
		printf("\n\nVoc� seguiu para o leste, seguindo seus instintos de sobreviv�ncia, sobre onde o sol deve nascer.\nEnquanto estava distra�do procurando musgos nas �rvores para se orientar, um homem guaxinim te atirou um dardo son�fero!\nQue morte sonolenta!");
	}
	else if(opcao == 4){
		printf("\n\nIndo para oeste, suas papilas de explora��o expandindo-se � flor da pele, voc� se viu em uma cachoeira!\nAs Cataratas de Gargalom!\nVoc� monta uma pequena fazenda no topo das cataratas, e come�a a cobrar entrada para todos os gnomos!\nEles se revoltam e te jogam cachoeira a baixo. Que morte revoltante!");
	}
	else if(opcao == 5){
		printf("Voc� fica parado por um bom tempo... Muito tempo mesmo...\nUma banda de gnomos passa por voc�, e eles te ignoram... Voc� fica mais tempo parado...\nVoc� vira uma est�tua! Que morte demorada!");
	}
}
