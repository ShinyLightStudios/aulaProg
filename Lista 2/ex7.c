#include <stdio.h>
#include <stdlib.h>

int main(void){
	float vitoriaVermelha, empateVermelha, derrotaVermelha;
	float porcentagemVermelha;
	float vitoriaAzul, empateAzul, derrotaAzul;
	float porcentagemAzul;
	printf("Equipe Vermelha");
	printf("\nDigite a quantidade de vitorias da equipe vermelha: ");
	scanf("%f", &vitoriaVermelha);
	printf("\nDigite a quantidade de empates da equipe vermelha: ");
	scanf("%f",&empateVermelha);
	printf("\nDigite a quantidade de derrotas da equipe vermelha: ");
	scanf("%f",&derrotaVermelha);
	printf("\nDigite a quantidade de vitorias da equipe azul: ");
	scanf("%f",&vitoriaAzul);
	printf("\nDigite a quantidade de empates da equipe azul: ");
	scanf("%f",&empateAzul);
	printf("\nDigite a quantidade de derrotas da equipe azul: ");
	scanf("%f",&derrotaAzul);
	porcentagemVermelha = vitoriaVermelha/(vitoriaVermelha+empateVermelha+derrotaVermelha);
	porcentagemAzul = vitoriaAzul/(vitoriaAzul+empateAzul+derrotaAzul);
	printf("\n\nEquipe Vermelha ---- Equipe Azul");
	printf("\n %0.f Vitorias: %0.f  porcento  ---- ",vitoriaVermelha,porcentagemVermelha*100);
	printf("%0.f Vitorias: %0.f porcento",vitoriaAzul,porcentagemAzul*100);
	porcentagemVermelha = empateVermelha/(vitoriaVermelha+empateVermelha+derrotaVermelha);
	porcentagemAzul = empateAzul/(vitoriaAzul+empateAzul+derrotaAzul);
	printf("\n %0.f Empates:  %0.f  porcento  ---- ",empateVermelha,porcentagemVermelha*100);
	printf("%0.f Empates: %0.f porcento", empateAzul, porcentagemAzul*100);
	porcentagemAzul = derrotaAzul/(vitoriaAzul+empateAzul+derrotaAzul);
	porcentagemVermelha = derrotaVermelha/(vitoriaVermelha+empateVermelha+derrotaVermelha);
	printf("\n %0.f Derrotas: %0.f  porcento  ----",derrotaVermelha,porcentagemVermelha*100);
	printf(" %0.f Derrotas: %0.f porcento", derrotaAzul, porcentagemAzul*100);
}
