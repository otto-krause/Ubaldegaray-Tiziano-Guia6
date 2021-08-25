#include<stdio.h>
#include<stdlib.h>
int main()
{
	char Calificación;
	printf ("Introduzca una nota");
	Calificacion=getchar();
	
	switch(Calificación)
	{
	case 'A'
	puts("La nota es EXCELENTE");
		break;
	case 'B'
	puts("La nota es buena");
		break;
	case 'C'
	puts("La nota es suficiente");
		break;
	case 'D'
	puts("La nota es regular");
		break;
	case 'f'
	puts("La nota es insuficiente");
		break;
	default:
		puts("No se ingreso correctamente");
	}
	system("pause");
}
	