/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Variáveis globais */
int   d, m, a, erro;

/* Corpo do programa */
int main(){
  do{
  	system ("cls");
  	printf ("\nAno aceito: n%cmero de 4 d%cgitos a partir de 2024", 163,161);
	printf ("\nDigite o ano: "); 
	fflush (stdin); 
	scanf("%i", &a);
  }while ( a<2024 || a>9999 ) ;
  
  do{
  	system ("cls");
  	printf ("\nM%cs aceito: valor de 1 a 12", 136);
	printf ("\nDigite o m%cs: ", 136); 
	fflush (stdin); 
	scanf("%i", &m);
  }while  ( m<1 || m>12 );
  
  do{
  	erro=0;
  	system ("cls");
  	printf ("\nDia aceito: valor de 1 a 31");
	printf ("\nDigite o dia: "); 
	fflush (stdin); 
	scanf("%i", &d);
	if ( d<1 || d>31 )   
	   erro = 1;
	else
	   switch (m)
	   {
	   	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		   if (d > 31) erro = 1;
		break; 
		case 4: case 6: case 9: case 11:
		   if (d > 30) erro = 1;
		break;
		case 2: 
		   if (d > 29 ) erro = 1;
		break;
	   }
  }while ( erro == 1 );
  system ("cls");
  printf ("\nData fornecida: %02i/%02i/%04i", d,m,a);
  getch();
  return 0;
}

