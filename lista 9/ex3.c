#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void romano(int numeral){
	int i;
	#define qtd_Strings 50
	#define tamanho_max_string 20
	char numero_romano[qtd_Strings][tamanho_max_string] = {
	"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX","XXI",
	"XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX","XXX","XXXI","XXXII","XXXIII","XXXIV","XXXV","XXXVI","XXXVII","XXXVIII","XXXIX"
	"XL","XLI","XLII","XLIII","XLIV","XLV","XLVI","XLVII","XLVIII","XLIX","L"
	};
	if(numeral>50 || numeral<1){
		printf("Erro");
	}else{
		for(i=0;i<=numeral;i++){
			if(i==numeral){
				printf("\n%s ",numero_romano[i-1]);
			}
		}	
	} 
}

int main(void){
	int numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira um numero de 1 a 50: ");
	scanf("%d",&numero);
	romano(numero);
}
