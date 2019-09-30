#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void extenso(int numeral){
	int i;
	#define qtd_Strings 11
	#define tamanho_max_string 10
	char numero_extenso[qtd_Strings][tamanho_max_string] = {
	"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove","dez"
	};
	if(numeral>10 || numeral<0){
		printf("Erro");
	}else{
		for(i=0;i<=numeral;i++){
			if(i==numeral){
				printf("\n%s ",numero_extenso[i]);
			}
		}	
	} 
}

int main(void){
	int num1;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Escreva um numero: ");
	scanf("%d", &num1);
	extenso(num1);
}
