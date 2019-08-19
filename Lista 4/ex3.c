#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=0;i<=100;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
}
