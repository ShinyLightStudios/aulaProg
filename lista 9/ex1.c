#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void mes(int num){
	if(num == 1){
		printf("Janeiro");
	}
	else if(num == 2){
		printf("Fevereiro");
	}
	else if(num==3){
		printf("Março");
	}
	else if(num==4){
		printf("Abril");
	}
	else if(num==5){
		printf("Maio");
	}
	else if(num==6){
		printf("Junho");
	}
	else if(num==7){
		printf("Julho");
	}
	else if(num==8){
		printf("Agosto");
	}
	else if(num==9){
		printf("Setembro");
	}
	else if(num==10){
		printf("Outubro");
	}
	else if(num==11){
		printf("Novembro");
	}
	else if(num==12){
		printf("Dezembro");
	}
	else{
		printf("Erro");
	}
}


int main(void){
	int numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira um numero de 1 a 12: ");
	scanf("%d",&numero);
	printf("\n");
	mes(numero);
}
