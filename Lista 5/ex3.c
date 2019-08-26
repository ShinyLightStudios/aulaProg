#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i,j;
	printf("Insira um número: ");
	scanf("%d",&j);
	if(j>=0){
		for(i=0;i<=j;i++){
			printf("\t%d",i);
		}
	}
	else{
		for(i=0;i>=j;i--){
			printf("\n%d",i);
		}
	}
}
