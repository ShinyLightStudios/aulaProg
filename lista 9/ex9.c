#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
float sig(float z){
	float euler = 2.71828;
	return 1/(1 + pow(euler,z*-1));
}

int main(void){
	float z;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Insira o valor de z: ");
	scanf("%f",&z);
	printf("\n\nsig = %f",sig(z));
}
