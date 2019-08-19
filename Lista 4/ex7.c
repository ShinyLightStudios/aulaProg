#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=0;i<=100;i++){
		if(i%4==0 && i!=0){
			printf("plim, ");
		}
		else{
			printf("%d, ", i);
		}
	}
	printf("\b\b.");
}
