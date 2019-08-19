#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int i;
	for(i=100;i>=0;i--){
		if(i%2==1){
			printf("%d ",i);
		}
	}
}
