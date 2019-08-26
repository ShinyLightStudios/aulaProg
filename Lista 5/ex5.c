#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i,j;
	i= 1+ rand()%100;
	j= 1+ rand()%100;
	printf("Numero 1: %d Numero 2: %d\n\n",i,j);
	i++;
	j--;
	if(i>=j){
		for(i;i>=j;i--){
			printf(" %d",i);
		}
	}
	else{
		for(i;i<=j;i++){
			printf(" %d",i);
		}
	}
}
