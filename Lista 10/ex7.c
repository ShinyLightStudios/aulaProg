#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int ord_Decrescente(int num1, int num2, int num3, int num4){
	int pos[4], i,ordem[4];
	ordem[0] = -1;
	ordem[3] = -1;
	ordem[1] = -1;
	ordem[2] = -1;
	pos[0] = num1;
	pos[1] = num2;
	pos[2] = num3;
	pos[3] = num4;
	int x;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[0]){
			ordem[0] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[1]){
			ordem[1] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[2]){
			ordem[2] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[3]){
			ordem[3] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	return (ordem[0]*1000)+(ordem[1]*100)+(ordem[2]*10)+ordem[3];
}

int ord_Crescente(int num1, int num2, int num3, int num4){
	int pos[4], i,ordem[4];
	ordem[0] = -1;
	ordem[3] = -1;
	ordem[1] = -1;
	ordem[2] = -1;
	pos[0] = num1;
	pos[1] = num2;
	pos[2] = num3;
	pos[3] = num4;
	int x;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[0]){
			ordem[0] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[1]){
			ordem[1] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[2]){
			ordem[2] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	for(i=0;i<4;i++){
		if(pos[i]>ordem[3]){
			ordem[3] = pos[i];
			x = i;
		}
	}
	pos[x] = -1;
	return (ordem[3]*1000)+(ordem[2]*100)+(ordem[1]*10)+ordem[0];
}

void checar_Algarismos(int numero){
	int pos[4], i, n1, n2, n3;
	pos[0] = numero/1000;
	pos[1] = (numero-(pos[0]*1000))/100;
	pos[2] = (numero - (pos[0]*1000) - (pos[1] * 100))/10;
	pos[3] = (numero - (pos[0]*1000) - (pos[1]*100) - (pos[2]*10));
	if(pos[0] == pos[1] && pos[0] == pos[2] && pos[0] == pos[3]){
		
	}
	else{
		for(i=1;i<=8;i++){
			if(i>1){
				pos[0] = n3/1000;
				pos[1] = (n3-(pos[0]*1000))/100;
				pos[2] = (n3 - (pos[0]*1000) - (pos[1] * 100))/10;
				pos[3] = (n3 - (pos[0]*1000) - (pos[1]*100) - (pos[2]*10));
			}
			printf("%d. ",i);
			n1 = ord_Decrescente(pos[0],pos[1],pos[2],pos[3]);
			n2 = ord_Crescente(pos[0],pos[1],pos[2],pos[3]);
			n3 = n1-n2;
			printf("%04d - %04d = %04d\n", n1,n2,n3);
		}
	}
}


int main(void){
	int numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Digite um número de 4 algarismos: ");
	scanf("%d",&numero);
	checar_Algarismos(numero);
}
