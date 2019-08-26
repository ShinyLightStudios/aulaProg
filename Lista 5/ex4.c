#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i=1,j,k;
	printf("Insira um número: ");
	scanf("%d",&j);
	k=j-1;
	while(i<=5){
		if(k%2!=0){
			i++;
		}
		k--;
	}
	i=1;
	while(i<=5){
		if(k%2!=0){
			i++;
			printf(" %d",k);
		}
		k++;
	}
	i=1;
	k=j+1;
	printf(" %d",j);
	while(i<=5){
		if(k%2!=0){
			i++;
			printf(" %d",k);
		}
		k++;
	}
}
