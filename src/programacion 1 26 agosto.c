/*
 ============================================================================
 Name        : programacion.c
 Author      : Claudia Vila
 Version     :
 Copyright   : CV-44
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//do while en C
	  char respuesta;

	  	do
		{
			printf("continuar? s-n");
			fflush(stdin);
			scanf("%c", & respuesta);
		}
		while(respuesta=='s');
	return EXIT_SUCCESS;
}
