#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int i,random;
	for(i=1;i<=10;i++){
		random = rand()%101;
		printf("%d ",random);
	}
}
