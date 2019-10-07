#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void printvazio(int quant){
	int i;
	for(i=1;i<=quant;i++){
		printf("    ",i);
	}
}

void gerador(int numero){
	int i, counter;
	if(numero == 1){
		counter = 3;
		printvazio(counter-1);
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 2){
		counter = 6;
		printvazio(counter-1);
		for(i=1;i<=28;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 3){
		counter = 6;
		printvazio(counter-1);
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 4){
		counter = 2;
		printvazio(counter-1);
		for(i=1;i<=30;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 5){
		counter = 4;
		printvazio(counter-1);
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 6){
		counter = 7;
		printvazio(counter-1);
		for(i=1;i<=30;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 7){
		counter = 2;
		printvazio(counter-1);
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 8){
		counter = 5;
		printvazio(counter-1);
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 9){
		counter = 1;
		for(i=1;i<=30;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 10){
		counter = 3
		;
		printvazio(counter-1);
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 11){
		counter = 6;
		printvazio(counter-1);
		for(i=1;i<=30;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	else if(numero == 12){
		counter = 1;
		for(i=1;i<=31;i++){
		printf("%02d  ",i);
			if(counter==7){
				printf("\n");
				counter=0;
			}
		counter++;
		}
	}
	/*
	for(i=1;i<=quantidade;i++){
		printf("%02d  ",i);
		if(counter1==7){
			printf("\n");
			counter1=0;
		}
		counter1++;
	}
	*/
}

void calendario(int numero){
	if(numero==1){
		printf("--------------------------\n");
		printf("       Janeiro, 2019      \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==2){
		printf("--------------------------\n");
		printf("      Fevereiro, 2019     \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==3){
		printf("--------------------------\n");
		printf("        Março, 2019       \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==4){
		printf("--------------------------\n");
		printf("        Abril, 2019       \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==5){
		printf("--------------------------\n");
		printf("        Maio, 2019        \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==6){
		printf("--------------------------\n");
		printf("        Junho, 2019       \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==7){
		printf("--------------------------\n");
		printf("        Julho, 2019       \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==8){
		printf("--------------------------\n");
		printf("        Agosto, 2019      \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==8){
		printf("--------------------------\n");
		printf("       Setembro, 2019     \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==9){
		printf("--------------------------\n");
		printf("       Setembro, 2019     \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==10){
		printf("--------------------------\n");
		printf("        Outubro, 2019     \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==11){
		printf("--------------------------\n");
		printf("       Novembro, 2019     \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
	else if(numero==12){
		printf("--------------------------\n");
		printf("       Dezembro, 2019     \n");
		printf("--------------------------\n");
		printf(" D   S   T   Q   Q   S   S\n");
		gerador(numero);
	}
}

int main(void){
	int numero;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	//printf("Insira um número de 1 a 12: ");
	//scanf("%d", &numero);
	for(numero=1;numero<=12;numero++){
		calendario(numero);
		printf("\n");
	}
	calendario(numero);
}
