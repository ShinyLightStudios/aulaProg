#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void){
	float segundos;
	float minutos;
	float horas;
	setlocale(LC_ALL,"");
	segundos = 300.00*(19000.00/400.00);
	horas = segundos/3600.00;
	horas = (int)floor(horas);
	segundos = segundos - horas*3600;
	minutos = segundos/60;
	minutos = (int)floor(minutos);
	segundos = segundos - minutos*60;
	printf("%0.f:%0.f:%0.f",horas,minutos,segundos);
}
