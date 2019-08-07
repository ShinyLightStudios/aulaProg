#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int escolha,computador;
	printf("--Jogador--");
	printf("\nEscolha entre:");
	printf("\n0- Pedra");
	printf("\n1- Papel");
	printf("\n2- Tesoura");
	printf("\n\nEscolha: ");
	scanf("%d",&escolha);
	computador = rand() %3;
	
	if(escolha == 0){
		if(computador==0){
			printf("\n\nEmpate!\n\nO Jogador escolheu Pedra, e o computador também escolheu Pedra!");
		}
		else if(computador==1){
			printf("\n\nDerrota do Jogador!\n\nO Computador escolheu Papel, ganhando do jogador que escolheu Pedra!");
		}
		else if(computador==2){
			printf("\n\nVitória do Jogador!\n\nO Jogador escolheu Pedra, ganhando do computador que escolheu Tesoura!");
		}
	}
	if(escolha == 1){
		if(computador==1){
			printf("\n\nEmpate!\n\nO Jogador escolheu Papel, e o computador também escolheu Papel!");
		}
		else if(computador==2){
			printf("\n\nDerrota do Jogador!\n\nO Computador escolheu Tesoura, ganhando do jogador que escolheu Papel!");
		}
		else if(computador==0){
			printf("\n\nVitória do Jogador!\n\nO Jogador escolheu Papel, ganhando do computador que escolheu Pedra!");
		}
	}
	if(escolha == 2){
		if(computador==2){
			printf("\n\nEmpate!\n\nO Jogador escolheu Tesoura, e o computador também escolheu Tesoura!");
		}
		else if(computador==0){
			printf("\n\nDerrota do Jogador!\n\nO Computador escolheu Pedra, ganhando do jogador que escolheu Tesoura!");
		}
		else if(computador==1){
			printf("\n\nVitória do Jogador!\n\nO Jogador escolheu Tesoura, ganhando do computador que escolheu Papel!");
		}
	}
}
