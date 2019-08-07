#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vitoriaVermelha, empateVermelha, derrotaVermelha;
	int vitoriaAzul, empateAzul, derrotaAzul;
	printf("Equipe Vermelha");
	printf("\nDigite a quantidade de vitorias da equipe vermelha: ");
	scanf("%d", &vitoriaVermelha);
	printf("\nDigite a quantidade de empates da equipe vermelha: ");
	scanf("%d",&empateVermelha);
	printf("\nDigite a quantidade de derrotas da equipe vermelha: ");
	scanf("%d",&derrotaVermelha);
	printf("\nDigite a quantidade de vitorias da equipe azul: ");
	scanf("%d",&vitoriaAzul);
	printf("\nDigite a quantidade de empates da equipe azul: ");
	scanf("%d",&empateAzul);
	printf("\nDigite a quantidade de derrotas da equipe azul: ");
	scanf("%d",&derrotaAzul);
	printf("\n\nEquipe Vermelha ---- Equipe Azul");
	printf("\n  Vitorias: %d    ---- Vitorias: %d",vitoriaVermelha,vitoriaAzul);
	printf("\n  Empates:  %d    ---- Empates:  %d",empateVermelha,empateAzul);
	printf("\n  Derrotas: %d    ---- Derrotas: %d",derrotaVermelha,derrotaAzul);
	printf("\n  Pontos:   %d    ---- Pontos:   %d",(vitoriaVermelha*3)+(empateVermelha), (vitoriaAzul*3)+(empateAzul));
}
