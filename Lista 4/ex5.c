#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=100;i<=200;i++){
		if(i%3==0){
			printf("%d ",i);
		}
	}
}
