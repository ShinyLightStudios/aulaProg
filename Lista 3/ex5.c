#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	float skins;
	setlocale(LC_ALL,"");
	printf("Quantas skins vai comprar?: ");
	scanf("%f",&skins);
	if(skins<15){
		printf("O pre�o final �: %0.2fR$",skins*1.30);
	}
	else{
		printf("O pre�o final �: %0.2fR$",skins*1.00);
	}
}
