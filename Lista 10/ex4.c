#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior(int a,int b, int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>c && b>a){
		return b;
	}
	else if(c>a && c>b){
		return c;
	}
}
int menor(int a,int b, int c){
	if(a<b && a<c){
		return a;
	}
	else if(b<c && b<a){
		return b;
	}
	else if(c<a && c<b){
		return c;
	}
}

int main(void){
	int a,b,c;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira 3 números: ");
	scanf("%d%d%d", &a,&b,&c);
	printf("Maior: %d",maior(a,b,c));
	printf("\nMenor: %d",menor(a,b,c));
}
