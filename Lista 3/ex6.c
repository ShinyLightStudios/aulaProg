#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int gold,item,retorno=0,preco;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	gold= 1000 + rand() %1001;
	printf("--- Loja de ouro da Rito Games ---");
	printf("\n1- Abraço do Serjão: 1300 gold\n2- Sedenta por Doce: 1700 gold\n3- Ampulheta do Zhé: 1500 gold\n4- Anel da Dora Aventureira: 500 gold\n5- Rapadura de Uarmogui: 1900 gold");
	printf("\n\nO seu Gold: %d",gold);
	printf("\n\nEscolha: ");
	scanf("%d",&item);
	if(item==1){
		preco= 1300;
		if(gold>=preco){
			retorno = 1;
		}
		else{
			retorno = 0;
		}
		if(retorno==1){
			printf("\n\nCompra feita com sucesso");
			printf("\nComprou o Abraço do Serjão");
			printf("\nPreço: %d Gold",preco);
			printf("\nSaldo restante: %d",gold-preco);
		}
		else{
			printf("\n\nCompra não realizada");
			printf("\nTentou comprar: Abraço do Serjão, por %d gold",preco);
			printf("\nFaltaram %d gold para completar a compra", preco-gold);
		}
	}
	else if(item==2){
		preco= 1700;
		if(gold>=preco){
			retorno = 1;
		}
		else{
			retorno = 0;
		}
		if(retorno=1){
			printf("\n\nCompra feita com sucesso");
			printf("\nComprou a Sedenta por Doce");
			printf("\nPreço: %d Gold",preco);
			printf("\nSaldo restante: %d",gold-preco);
		}
		else{
			printf("\n\nCompra não realizada");
			printf("\nTentou comprar: Sedenta por Doce, por %d gold",preco);
			printf("\nFaltaram %d gold para completar a compra", preco-gold);
		}
	}
	else if(item==3){
		preco= 1500;
		if(gold>=preco){
			retorno = 1;
		}
		else{
			retorno = 0;
		}
		if(retorno==1){
			printf("\n\nCompra feita com sucesso");
			printf("\nComprou a Ampulheta do Zhé");
			printf("\nPreço: %d Gold",preco);
			printf("\nSaldo restante: %d",gold-preco);
		}
		else{
			printf("\n\nCompra não realizada");
			printf("\nTentou comprar: Ampulheta do Zhé, por %d gold",preco);
			printf("\nFaltaram %d gold para completar a compra", preco-gold);
		}
	}
	else if(item==4){
		preco= 500;
		if(gold>=preco){
			retorno = 1;
		}
		else{
			retorno = 0;
		}
			if(retorno==1){
			printf("\n\nCompra feita com sucesso");
			printf("\nComprou o Anel da Dora a Aventureira");
			printf("\nPreço: %d Gold",preco);
			printf("\nSaldo restante: %d",gold-preco);
		}
		else{
			printf("\nCompra não realizada");
			printf("\nTentou comprar: Anel da Dora a Aventureira, por %d gold",preco);
			printf("\nFaltaram %d gold para completar a compra", preco-gold);
		}
	}
	else if(item==5){
		preco= 1900;
		if(gold>=preco){
			retorno = 1;
		}
		else{
			retorno = 0;
		}		
		if(retorno==1){
			printf("\n\nCompra feita com sucesso");
			printf("\nComprou a Rapadura de Uarmogui");
			printf("\nPreço: %d Gold",preco);
			printf("\nSaldo restante: %d",gold-preco);
		}
		else{
			printf("\n\nCompra não realizada");
			printf("\nTentou comprar: Rapadura de Uarmogui, por %d gold",preco);
			printf("\nFaltaram %d gold para completar a compra", preco-gold);
		}
	}
}
