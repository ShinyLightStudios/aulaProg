#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=1;i<=10;i++){
		printf("Aur�lio\n");
	}
	for(i=1;i<=10;i++){
		printf("Aur�lio");
		if(i!=10){
			printf(",");
		}
	}
}
