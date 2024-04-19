/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Variáveis globais */
char  s1,s2,s3,s4;
int   erro;

/* Corpo do programa */
int main(){
  do{
  	erro = 0;
  	system ("cls");
  	printf ("\nForne%ca a senha de 4 caracteres: ", 135);
	fflush (stdin); 	s1 = getch();   printf ("%c",3);
	fflush (stdin); 	s2 = getch();   printf ("%c",3);
	fflush (stdin); 	s3 = getch();   printf ("%c",3);
	fflush (stdin); 	s4 = getch();   printf ("%c",3);
	if ( s1 == 76 && s2 == 79 && s3 == 86 && s4 == 69 )
	   printf ("\nAcesso concedido.");
	else
	{
		printf ("\nAcesso negado!");
		erro = 1;
	}
	getch();
  }while ( erro == 1 );
  return 0;
}
