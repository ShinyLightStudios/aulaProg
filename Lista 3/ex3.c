#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int comparacao(int num1,int num2){
	if(num1<num2){
		printf("\n\nO seu número é menor que o número sorteado!");
		return 1;
	}
	else if(num1>num2){
		printf("\n\nO seu número é maior que o número sorteado!");
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){
	srand(time(NULL));
	int i=1, jogador, numero, retorno;
	setlocale(LC_ALL,"");
	numero = rand() % 101;
	printf("--Jogo de Adivinhação--");
	printf("\nVocê tem 5 chances para acertar o número que foi sorteado entre 0 e 100!");
	while(i<6){
		if(i<6){
			printf("\nEscolha um número(Entre 0 e 100): ");
			scanf("%d",&jogador);
			retorno = comparacao(jogador,numero);	
		}
		if(retorno==1){
			i++;
		}
		else{
			printf("\nParabéns, você ganhou!");
			return 0;
		}
		if(i==6){
			printf("\n\nSinto muito, você não acertou!");
		}
	}
}
