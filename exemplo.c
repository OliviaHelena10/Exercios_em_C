#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void) 
{
   void troca (int *i, int *j)
    {
   		int *temp;
   		temp = *i; *i = *j; *j = temp;
	}
}
