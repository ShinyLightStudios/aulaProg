#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	int paridade, num1, num2;
	setlocale(LC_ALL,"");
	printf("-Jogador 1-");
	printf("\nEscolha\n1-Par\n2-Impar\n\nEscolha: ");
	scanf("%d",&paridade);
	printf("\nEscolha um número de 1 a 5: ");
	scanf("%d",&num1);
	printf("\n\n-Jogador 2-");
	printf("\nEscolha um número de 1 a 5: ");
	scanf("%d",&num2);
	if(paridade==1){
		if((num1+num2)%2==0){
			printf("\n\n\nJogador 1 Ganhou\nJogador 2 Perdeu");
		}
		else{
			printf("\n\n\nJogador 2 Ganhou\nJogador 1 Perdeu");
		}
	}
	else if(paridade==2){
		if((num1+num2)%2==1){
			printf("\n\n\nJogador 1 Ganhou\nJogador 2 Perdeu");
		}
		else{
			printf("\n\n\nJogador 2 Ganhou\nJogador 1 Perdeu");
		}
	}
	else{
		printf("Paridade Inválida");
	}
}
