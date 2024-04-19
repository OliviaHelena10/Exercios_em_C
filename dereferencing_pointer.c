# include <stdio.h>
# include <stdlib.h>

// ponteiros são tipos de dados
// quando criamos um ponteiro devemos usar o endereço de memória que já existe
// when we create a pointer variable we are gonna store the memory adress of another variable
// podemos "dereferenciate" um ponteiro colocando o asterisco (*)
// when we direference a pointer, it will no longer be a pointer to a memory adress, it will be whatever was stored the pointer was pointing to


int main ()
{
	int age = 30;
	int * p_age = &age;
	double gpa = 3.4;
	char grade = 'A';
	
	printf ( "%d", *p_age ); // quando vamos dereference um ponteiro precisamo colocar um double, char, etc desde que seja != de p
	printf ( "\n%d", *&age); // outras formas:
	printf ( "\n%d", &*&age);
	printf ( "\n%d", *&*&age);
	
	return 0;
}
