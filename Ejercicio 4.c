#include<stdio.h>
#include<stdlib.h>
int main()
{
	char Dia;
	printf ("Introduzca el numero de dia");
	Dia=getchar();
	
	switch(Dia)
	{
	case '1'
	puts("El dia es Lunes");
		break;
	case '2'
	puts("El dia es Martes");
		break;
	case '3'
	puts("El dia es Miercoles");
		break;
	case '4'
	puts("El dia es Jueves");
		break;
	case '5'
	puts("El dia es Viernes");
		break;
	case '6'
	puts("El dia es Sabado");
		break;
	case '7'
	puts("El dia es Domingo");
		break;		
	default:
		puts("No se ingreso correctamente");
	}
	system("pause");