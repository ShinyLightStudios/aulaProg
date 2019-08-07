#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int opcao;
	printf("********************");
	printf("\n* Jogo da Floresta *");
	printf("\n********************");
	printf("\n\nVocê dormiu e acordou no meio de uma floresta, o que você quer fazer?");
	printf("\n1- Seguir para Norte");
	printf("\n2- Seguir para Sul");
	printf("\n3- Seguir para Leste");
	printf("\n4- Seguir para Oeste");
	printf("\n5- Ficar parado");
	printf("\n\nEscolha: ");
	scanf("%d",&opcao);
	if(opcao == 1){
		printf("\n\nVocê seguiu para norte, andando por uma parte fria da floresta.\nQuando decidiu se abaixar para pegar cogumelos, um gigante de gelo pisou em você.\nQue morte triste!");
	}
	else if(opcao == 2){
		printf("\n\nVocê seguiu ao sul, uma parte mais quente e viva da floresta foi se desabrochando.\nDepois de algumas horas de caminhada, você chegou ao vale das fadas.\nMas... Elas estavam com fome e te fizeram de ensopado!\nQue morte ensopada!");
	}
	else if(opcao == 3){
		printf("\n\nVocê seguiu para o leste, seguindo seus instintos de sobrevivência, sobre onde o sol deve nascer.\nEnquanto estava distraído procurando musgos nas árvores para se orientar, um homem guaxinim te atirou um dardo sonífero!\nQue morte sonolenta!");
	}
	else if(opcao == 4){
		printf("\n\nIndo para oeste, suas papilas de exploração expandindo-se à flor da pele, você se viu em uma cachoeira!\nAs Cataratas de Gargalom!\nVocê monta uma pequena fazenda no topo das cataratas, e começa a cobrar entrada para todos os gnomos!\nEles se revoltam e te jogam cachoeira a baixo. Que morte revoltante!");
	}
	else if(opcao == 5){
		printf("Você fica parado por um bom tempo... Muito tempo mesmo...\nUma banda de gnomos passa por você, e eles te ignoram... Você fica mais tempo parado...\nVocê vira uma estátua! Que morte demorada!");
	}
}
