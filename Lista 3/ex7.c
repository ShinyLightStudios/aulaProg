#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int tipo, numero,numJogador,aposta;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	numero = rand() %101;
	printf("--- Apostas ---");
	printf("\n1- Escolher um número de 0 a 100.(Aposta x 100)");
	printf("\n2- Escolher se o número será par ou ímpar.(Aposta x 2)");
	printf("\n3- Escolher se o número estará em uma área de números, exemplo: 0-25, 25-50.(Aposta x 4)");
	printf("\n\nEscolha o método: ");
	scanf("%d",&tipo);
	
	if(tipo==1){
		printf("--- Número Específico ---");
		printf("\n\nDigite quanto deseja apostar: ");
		scanf("%d",&aposta);
		if(aposta>100){
			printf("\n\nVocê não tem esse dinheiro!");
			return 0;
		}
		else if(aposta==0){
			printf("\n\nVocê tem que apostar algo!");
			return 0;
		}
		printf("\nDigite o numero escolhido(Entre 0 e 100): ");
		scanf("%d",&numJogador);
		if(numJogador==numero){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Numero Especíico\nPrêmio: %d",numero,aposta*100);
		}
		else{
			printf("\n\n--- Que pena! ---\nNumero sorteado: %d\nTipo de aposta: Numero Específico",numero);
		}
	}
	else if(tipo==2){
		printf("--- Par ou Ímpar ---");
		printf("\n\nDigite quanto deseja apostar: ");
		scanf("%d",&aposta);
		if(aposta>100){
			printf("\n\nVocê não tem esse dinheiro!");
			return 0;
		}
		else if(aposta==0){
			printf("\n\nVocê tem que apostar algo!");
			return 0;
		}
		printf("\n\n1- Par");
		printf("\n2- Ímpar");
		printf("\n\nEscolha: ");
		scanf("%d",&numJogador);
		if(numJogador==1 && numero%2==0){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Par ou Ímpar\nPrêmio: %d",numero,aposta*2);
		}
		else if(numJogador==2 && numero%2==1){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Par ou Ímpar\nPrêmio: %d",numero,aposta*2);
		}
		else if(numJogador==1 && numero%2==1){
			printf("\n\n--- Que pena! ---\nNumero sorteado: %d\nTipo de aposta: Par ou Ímpar",numero);
		}
		else if(numJogador==2 && numero%2==0){
			printf("\n\n--- Que pena! ---\nNumero sorteado: %d\nTipo de aposta: Par ou Ímpar",numero);
		}
		else{
			printf("\n\nCondição Inválida");
			return 0;
		}
	}
	else if(tipo==3){
		printf("--- Area de números ---");
		printf("\n\nDigite quanto deseja apostar: ");
		scanf("%d",&aposta);
		if(aposta>100){
			printf("\n\nVocê não tem esse dinheiro!");
			return 0;
		}
		else if(aposta==0){
			printf("\n\nVocê tem que apostar algo!");
			return 0;
		}
		printf("\n\nEscolha a área de números");
		printf("\n1- 0-25");
		printf("\n2- 26-50");
		printf("\n3- 51-75");
		printf("\n4- 76-100");
		printf("\n\nEscolha: ");
		scanf("%d",&numJogador);
		if(numJogador==1 && numero>=0 && numero<=25){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Área de números\nPrêmio: %d",numero,aposta*4);
		}
		else if(numJogador==2 && numero>25 && numero<=50){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Área de números\nPrêmio: %d",numero,aposta*4);
		}
		else if(numJogador==3 && numero>50 && numero<=75){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Área de números\nPrêmio: %d",numero,aposta*4);
		}
		else if(numJogador==4 && numero>75 && numero<=100){
			printf("\n\n--- Parabéns ---!\nNumero sorteado: %d\nTipo de aposta: Área de números\nPrêmio: %d",numero,aposta*4);
		}
		else{
			printf("\n\n--- Que pena! ---\nNumero sorteado: %d\nTipo de aposta: Área de números",numero);
		}
	}
}
