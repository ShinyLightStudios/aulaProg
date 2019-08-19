#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=1;i<=10;i++){
		printf("Aurélio\n");
	}
	for(i=1;i<=10;i++){
		printf("Aurélio");
		if(i!=10){
			printf(",");
		}
	}
}
