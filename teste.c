#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	void troca (int *i, int *j) 
	{
		i = 1;
		j = 2;
	    int *temp;
	    printf ("%i", i);
	    *temp = *i; *i = *j; *j = *temp;
	    printf( "%i  -  %i  -  %i ", *i, *j, *temp );
	}

}
