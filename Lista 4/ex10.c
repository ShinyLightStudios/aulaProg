#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i,j;
	for(i=1;i<=100;i++){
		if(i%2==0){
			j = j+i;
			printf("%d\n",i);
		}
		
		
	}
	printf("Soma: %d",j);
}
