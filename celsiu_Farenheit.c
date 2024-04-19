/* Dada um temperatura em graus Fahrenheit, informe o valor
correspondente em graus Celsius. [Dica: C = (F – 32) * (5 / 9)]. */

/* BIBLIOTECAS */
# include <stdio.h>
# include <stdlib.h>

/* CORPO DE PROGRAMA */
int main ()
{
	int fa;
	float ce;
	printf ( "\nDigite uma temperatura em Fahrenheit: " );
	scanf ( "%i", &fa );
	
	
	ce = ( fa - 32 ) * ( 5.0 / 9.0 ) ;
	printf ( "\n\aA temperatura em graus celsius %c: %.2f", 130, ce);

	getch ();
	return 0;
}




