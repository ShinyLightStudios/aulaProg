#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char matriz[3][3];

int verifica_Vitoria(){
//Horizontal em cima
	if(matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != ' '){
		if(matriz[0][0] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[0][0] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Horizontal Meio
	else if(matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != ' '){
		if(matriz[1][0] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[1][0] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Horizontal de baixo
	else if(matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != ' '){
		if(matriz[2][0] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[2][0] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Vertical Esquerda
	else if(matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != ' '){
		if(matriz[0][0] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[0][0] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Vertical Meio
	else if(matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != ' '){
		if(matriz[0][1] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[0][1] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Vertical Direita
	else if(matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != ' '){
		if(matriz[0][2] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[0][2] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Horizontal Direita
	else if(matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != ' '){
		if(matriz[0][0] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[0][0] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Horizontal Direita
	else if(matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0] && matriz[0][2] != ' '){
		if(matriz[0][2] == 'x'){
			printf("\n\nVitoria do jogador 1!!!");
		}
		else if(matriz[0][2] == 'o'){
			printf("\n\nVitoria do jogador 2!!!");
		}
		return 1;
	}
//Se nenhuma linha tiver 3 caracteres iguais
	else{
		return 0;
	}
}


int main(void){
	
	int i,j=0,vitoria=0,x1,x2,o1,o2, disponivel = 0;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	
	while(vitoria==0){
//Imprime Jogo
		printf(" -------------\n");
		printf(" Jogo da Velha\n");
		printf(" -------------\n");
		printf("   0   1   2 \n");
		for(i=0;i<3;i++){
			printf("%d", i);
			printf("|");
			for(j=0;j<3;j++){
				if(matriz[i][j] != 'x' && matriz[i][j] != 'o'){
					matriz[i][j] = ' ';
				}
				printf(" %c |",matriz[i][j]);
			}
			printf("\n -------------\n");
		}
//Jogada do primeiro jogador
		while(disponivel != 1){
			printf("Insira a jogada do primeiro jogador: ");
			scanf("%d%d",&x1,&x2);
			if(matriz[x1][x2] != 'x' && matriz[x1][x2] != 'o'){
				matriz[x1][x2]= 'x';
				disponivel = 1;
			}else{
				printf("Favor, refazer a jogada, a posição está ocupada.\n");
				disponivel = 0;
			}
		}
		disponivel = 0;
		printf("\n\n");
//Imprime o jogo atualizado com a jogada do jogador 1
		for(i=0;i<3;i++){
			printf("%d", i);
			printf("|");
			for(j=0;j<3;j++){
				printf(" %c |",matriz[i][j]);
			}
			printf("\n -------------\n");
		}
//Verifica a vitoria depois da primeira jogada
		vitoria = verifica_Vitoria();
		if(vitoria==0){
		//Jogada do segundo jogador
			while(disponivel != 1){
				printf("Insira a jogada do segundo jogador: ");
				scanf("%d%d",&o1,&o2);
				if(matriz[o1][o2] != 'x' && matriz[o1][o2] != 'o'){
					matriz[o1][o2]= 'o';
					disponivel = 1;
				}else{
					printf("Favor, refazer a jogada, a posição está ocupada.\n");
					disponivel = 0;
				}
			}
			disponivel = 0;
			printf("\n\n");
		//Verifica a vitoria depois da segunda jogada
			vitoria = verifica_Vitoria();
		//Limpa a tela e reinicia o loop
			if(vitoria==0){
				system("cls");
			}
		}
	}
	return vitoria;
}
