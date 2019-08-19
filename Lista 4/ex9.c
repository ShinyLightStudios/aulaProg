#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i,j;
	for(i=1;i<=10;i++){
		j= j+i;
		printf("%d\n",i);
	}
	printf("Soma: %d",j);
}
