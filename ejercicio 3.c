#include<stdio.h>
#include<stdlib.h>
int main()
{
	char Mes;
	int anio=0
	printf("Introduzca número de mes y despues el anio para saber si es bisiesto:");
	scanf("%c", &mes);
	scanf("%d", &anio);
	int feb=28;
	if(anio%4==0 and (anio%100!=0 or anio%400!=0)){
	feb=29;
	}
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
			printf("%d", feb);
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