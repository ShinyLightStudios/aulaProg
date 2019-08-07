#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	float skins;
	setlocale(LC_ALL,"");
	printf("Quantas skins vai comprar?: ");
	scanf("%f",&skins);
	if(skins<15){
		printf("O preço final é: %0.2fR$",skins*1.30);
	}
	else{
		printf("O preço final é: %0.2fR$",skins*1.00);
	}
}
