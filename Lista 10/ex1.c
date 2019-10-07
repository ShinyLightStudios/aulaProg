#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int potencia(a,b){
	int i,inicial = a;
	for(i=1;i<b;i++){
		a = a*inicial;
	}
	return a;
}

int main(void){
	int a,b;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira dois números: ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Potencia: %d",potencia(a,b));
}
