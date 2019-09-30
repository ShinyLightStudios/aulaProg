#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void analisa_data(int num){
	
	int dia;
	char mes[20];
	
	if(num>0 && num<=31){
		strcpy(mes,"Janeiro");
		dia = num;
	}
	else if(num>31 && num<=59){
		strcpy(mes,"Fevereiro");
		dia = num-31;
	}
	else if(num>59 && num<=90){
		strcpy(mes,"Março");
		dia = num-59;
	}
	else if(num>90 && num<=120){
		strcpy(mes,"Abril");
		dia = num-90;
	}
	else if(num>120 && num<=151){
		strcpy(mes,"Maio");
		dia = num-120;
	}
	else if(num>151 && num <=181){
		strcpy(mes,"Junho");
		dia = num-151;
	}
	else if(num>181 && num<=212){
		strcpy(mes,"Julho");
		dia = num-181;
	}
	else if(num>212 && num<=243){
		strcpy(mes,"Agosto");
		dia = num-212;
	}
	else if(num>243 && num<=273){
		strcpy(mes,"Setembro");
		dia = num-243;
	}
	else if(num>273 && num <= 304){
		strcpy(mes,"Outubro");
		dia = num-273;
	}
	else if(num>304 && num<=334){
		strcpy(mes,"Novembro");
		dia = num-304;
	}
	else if(num>334 && num<=365){
		strcpy(mes,"Dezembro");
		dia = num-334;
	}
	
	
	if(num<0 || num>365){
		printf("Erro");
	}
	else{
		printf("%d/%s/2019",dia,mes);
	}
}

int main(void){
	int numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira um numero de 1 a 365: ");
	scanf("%d",&numero);
	analisa_data(numero);
}
