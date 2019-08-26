#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	int opt1, operacao,numero1=0,numero2=0,resultado=0, resposta,score_positivo = 0,score_negativo = 0;
	setlocale(LC_ALL,"");
	srand(time(NULL));
	while(opt1!=3){
		printf("- - - - - - Jogo de Operações - - - - - -\n");
		printf("- 1- Iniciar partida                    -\n");
		printf("- 2- Score                              -\n");
		printf("- 3- Sair                               -\n");
		printf("-----------------------------------------\n");
		printf("Escolha: ");
		scanf("%d",&opt1);
		if(opt1==1){
			operacao = 1 + rand()%4;
			if(operacao==1){
				numero1= 1+rand()%100;
				numero2= 1+rand()%100;
				resultado = numero1+numero2;
				printf("- - - - - - Jogo de Operações - - - - - -\n");
				printf(" %d + %d = ?                             \n",numero1,numero2);
				printf("------------------------------------------\n");
				printf("Insira sua resposta: ");
				scanf("%d",&resposta);
				if(resposta == resultado){
					printf("\nParabens! Você acertou!\n\n");
					score_positivo++;
				}
				else{
					printf("\nVocê errou! Que pena!\n\n");
					score_negativo++;
				}
			}
			else if(operacao==2){
				numero1= 1+rand()%100;
				numero2= 1+rand()%100;
				resultado = numero1-numero2;
				printf("- - - - - - Jogo de Operações - - - - - -\n");
				printf(" %d - %d = ?                             \n",numero1,numero2);
				printf("------------------------------------------\n");
				printf("Insira sua resposta: ");
				scanf("%d",&resposta);
				if(resposta == resultado){
					printf("\nParabens! Você acertou!\n\n");
					score_positivo++;
				}
				else{
					printf("\nVocê errou! Que pena!\n\n");
					score_negativo++;
				}
			}
			else if(operacao==3){
				numero1= 1+rand()%100;
				numero2= 1+rand()%100;
				resultado = numero1*numero2;
				printf("- - - - - - Jogo de Operações - - - - - -\n");
				printf(" %d * %d = ?                             \n",numero1,numero2);
				printf("------------------------------------------\n");
				printf("Insira sua resposta: ");
				scanf("%d",&resposta);
				if(resposta == resultado){
					printf("\nParabens! Você acertou!\n\n");
					score_positivo++;
				}
				else{
					printf("\nVocê errou! Que pena!\n\n");
					score_negativo++;
				}
			}
			else if(operacao==1){
				while((numero1/numero2)%2!=0){
					numero1= 1+rand()%100;
					numero2= 1+rand()%100;
				}
				resultado = numero1/numero2;
				printf("- - - - - - Jogo de Operações - - - - - -\n");
				printf(" %d / %d = ?                             \n",numero1,numero2);
				printf("------------------------------------------\n");
				printf("Insira sua resposta: ");
				scanf("%d",&resposta);
				if(resposta == resultado){
					printf("\nParabens! Você acertou!\n\n");
					score_positivo++;
				}
				else{
					printf("\nVocê errou! Que pena!\n\n");
					score_negativo++;
				}
			}
		}
		else if(opt1==2){
			printf("\n\n\n");
			printf("- - - - - - Jogo de Operações - - - - - -\n");
			printf("- Acertos: %d                            -\n",score_positivo);
			printf("- Erros:   %d                            -\n",score_negativo);
			printf("------------------------------------------\n");
		}
		if(score_negativo>=3){
			printf("\n\nVocê perdeu, que pena!\n\n");
			return 0;
		}
		else if(score_positivo>=3){
			printf("\n\nVocê ganhou, parabéns!\n\n");
			return 0;
		}
	}
}
