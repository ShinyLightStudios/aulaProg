#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++)
		printf("%d x %d = %d \n", i, j, i*j);
	}
}
