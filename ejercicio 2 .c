#include<stdio.h>
#include<stdlib.h>
int main()
{
	int Mes=0;
	printf("Introduzca número de mes para saber cantidad de dias que tiene:");
	scanf("%d", &mes);
		switch(Mes)
		{
			case'1'
			case'3'
			case'5'
			case'7'
			case'8'
			case'10'
			case'12'
			puts("Este mes tiene 31 dias.");
			break;
			case'2'
			puts("Tiene 28 dias.");
			break;
			case'4'
			case'6'
			case'9'
			case'11'
			puts("Este mes tiene 30 dias.");
			break;
		}
}