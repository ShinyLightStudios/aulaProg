#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int x, y;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira o valor de x: ");
	scanf("%d",&x);
	printf("\nInsira o valor de y: ");
	scanf("%d",&y);
	if(x>0 && y>0){
		printf("\n\nEst� no primeiro quadrante.");
	}
	else if(x<0 && y>0){
		printf("\n\nEst� no segudo quadrante.");
	}
	else if(x<0 && y<0){
		printf("\n\nEst� no terceiro quadrante.");
	}
	else if(x>0 && y<0){
		printf("\n\nEst� no quarto quadrante");
	}
	else if(x==0 && y==0){
		printf("\n\nEst� sobre a origem.");
	}
	else if(x==0 && y!=0){
		printf("\n\nEst� sobre a reta y");
	}
	else if(x!=0 && y==0){
		printf("\n\nEst� sobre a reta x");
	}
}
