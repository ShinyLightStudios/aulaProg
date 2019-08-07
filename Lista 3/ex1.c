#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int paridade, num1, num2;
	printf("-Jogador-");
	printf("\nEscolha\n1-Par\n2-Impar\n\nEscolha: ");
	scanf("%d",&paridade);
	printf("\nEscolha um número de 1 a 5: ");
	scanf("%d",&num1);
	num2 = rand()%5 +1;
	if(paridade==1){
		if((num1+num2)%2==0){
			printf("\n\n\nJogador Ganhou, ele escolheu o número: %d\nO Computador Perdeu, ele escolheu o número: %d",num1, num2);
		}
		else{
			printf("\n\n\nO Computador Ganhou, ele escolheu o número: %d\nJogador Perdeu, ele escolheu o número: %d",num1, num2);
		}
	}
	else if(paridade==2){
		if((num1+num2)%2==1){
			printf("\n\n\nJogador Ganhou, ele escolheu o número: %d\nO Computador Perdeu, ele escolheu o número: %d",num1, num2);
		}
		else{
			printf("\n\n\nO Computador Ganhou, ele escolheu o número: %d\nJogador Perdeu, ele escolheu o número: %d",num1, num2);
		}
	}
	else{
		printf("Paridade Inválida");
	}
}
