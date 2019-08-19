#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=300;i>=100;i--){
		if(i%4==0){
			printf("%d ",i);
		}
	}
}
