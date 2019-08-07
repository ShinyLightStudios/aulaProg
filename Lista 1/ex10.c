#include <stdio.h>
#include <stdlib.h>

int main(void){
	int peso;
	printf("Peso: ");
	scanf("%d",&peso);
	printf("Nome: Joaozinho Pescador de Truta\nQuantidade pescada: %d\nLimite: 50kg\nExcesso: %dkg\nMulta a pagar: %d.00 R$",peso,peso-50,(peso-50)*4);
}
