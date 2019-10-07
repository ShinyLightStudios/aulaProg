#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int divisivel(int x, int y){
	if(x%y==0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(void){
	int x,y,z,i;
	srand(time(NULL));
	rand();
	setlocale(LC_ALL,"");
	for(i=1;i<=10;i++){
		x= 1+ rand()%100;
		y= 1+ rand()%100;
		z = divisivel(x,y);
		printf("x: %d   y: %d   retorno: %d \n",x, y, z);
	}
}
