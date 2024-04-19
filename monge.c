/* Bibliotecas */
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

/* Corpo de Programa */
int main () 
{
	/* Variáveis mutáveis */
	int casas;
	unsigned long long graos = 1, pagamento = 0; 

	/* Loop de repetição */
	for ( casas = 1 ; casas <= 64; casas++ ) 
	{
		printf ( "%i)  %llu\n", casas, graos );
		pagamento += graos;
		graos = graos * 2; 
	}
	
	printf ("\n-------------------------------------------------");
	printf ( "\nO pagamento do monge %c %llu gr%cos", 130, pagamento, 198 );
	
	getch ();   
	return 0; 
}
