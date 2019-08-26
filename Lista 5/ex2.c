#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int rolagem, i;
	float num1=0,num2=0,num3=0,num4=0,num5=0,num6=0;
	for(i=1;i<=1000;i++){
		rolagem = 1 + rand()%6;
		if(rolagem==1){
			num1++;
		}
		else if(rolagem ==2){
			num2++;
		}
		else if(rolagem==3){
			num3++;
		}
		else if(rolagem==4){
			num4++;
		}
		else if (rolagem==5){
			num5++;
		}
		else if(rolagem==6){
			num6++;
		}
	}
	if((num1<=170 || num1 >= 160 && num2<=170 || num2 >= 160 && num3<=170 || num3 >= 160 && num4<=170 || num4 >= 160 && num1<=170 || num5 >= 160 && num6<=170 || num6 >= 160)){
		printf("O dado é justo.");
		printf("\n  Rolagem que deu 1: %0.2f %%\n  Rolagem que deu 2: %0.2f %%\n  Rolagem que deu 3: %0.2f %%\n  Rolagem que deu 4: %0.2f %%\n  Rolagem que deu 5: %0.2f %%\n  Rolagem que deu 6: %0.2f %%\n",num1/10,num2/10,num3/10,num4/10,num5/10,num6/10);
	}
	else{
		printf("O dado não é justo");
		printf("\n Rolagem que deu 1: %0.2f %%\n  Rolagem que deu 2: %0.2f %%\n  Rolagem que deu 3: %0.2f %%\n  Rolagem que deu 4: %0.2f %%\n  Rolagem que deu 5: %0.2f %%\n  Rolagem que deu 6: %0.2f %%\n",num1/10,num2/10,num3/10,num4/10,num5/10,num6/10);

	}
}
