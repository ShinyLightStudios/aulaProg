#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vida, ataque, defesa;
	float media;
	printf("\nInsira a vida do personagem: ");
	scanf("%d", &vida);
	printf("\nInsira o ataque do personagem: ");
	scanf("%d", &ataque);
	printf("\nInsira a defesa do personagem: ");
	scanf("%d",&defesa);
	printf("\n\n");	
	media= (vida+ataque+defesa)/3;
	if(media<=25 && media>=0){
		printf("Nivel: Novato");
	}
	else if(media<=50 && media>25){
		printf("Nivel: Mago")
	}
	else if(media<=75&& media>50){
		printf("Nivel: Mago Supremo");
	}
	else if(media<=100 && media>75){
		printf("Nivel: Lorde das Magias");
	}
	else{
		printf("Nivel: Desconhecido");
	}
}
