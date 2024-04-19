/*  BIBLIOTECAS  */
# include <stdio.h>
# include <conio.h>

/*  VARIÁVEIS  */
char a, b;
int contador;

/*  CORPO DE PROGRAMA  */
int main ()
{
	a = 0;
	b = 0;
	
	for ( contador = 0; contador < 4; contador++ )  {

		printf ( "\nPrisioneiro A, voc%c confessa ou fica em sil%cncio? ", 136, 136 );
		scanf ( "%c", &a );
		fflush (stdin);
		
		printf ( "Prisioneiro B, voc% confessa ou fica em sil%cncio? ", 136, 136 );
		scanf ( "%c", &b );
		fflush (stdin);
		
	
		if ( a == 'c' && b == 'c') 	printf ( "Ambos confessaram.\n" ); fflush ( stdin );
	
		if ( a == 'c' && b == 's')	printf ( "\nA sai livre e B pega 5 anos de cadeia\n" ); fflush ( stdin );
		
		if ( a == 's' && b == 'c')	printf ( "\nB sai livre e A pega 5 anos de cadeia\n" ); fflush ( stdin );
		
		if ( a == 's' && b == 's')	printf ( "\nNinguém confessou, ambos ficarão 1 ano na cadeia\n" ); fflush ( stdin );

		getch();
		
     	} 
	
	return 0;
}
