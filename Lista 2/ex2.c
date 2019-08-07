#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	float metros = 0;
	printf("Digite a quantidade de metros quadrados a ser pintada: ");
	scanf("%f", &metros);
	printf("\nA quantidade de latas de tinta a se comprar e: %0.f", ceil(metros/3/18));
	printf("\nO preco a ser pago e: %0.2fR$", ceil(metros/3/18)*80.00);
}
