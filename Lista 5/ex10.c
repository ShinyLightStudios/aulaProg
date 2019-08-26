#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	int i, j;
	int fatorial=1;
	float euler = 0, fatorial_f;
	printf("n\t Euler (e)");
	for(i=0;i<=20;i++){
		fatorial = 1;
		for(j=i;j>=1;j--){
			fatorial = fatorial * j;
		}
		fatorial_f = fatorial;
		euler = euler + (1/fatorial_f);
		printf("\n%d\t %f",i, euler);
	}
}
