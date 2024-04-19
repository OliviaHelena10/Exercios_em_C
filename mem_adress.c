# include <stdio.h>
# include <stdlib.h>

// ponteiros são tipos de dados
// quando criamos um ponteiro devemos usar o endereço de memória que já existe
// when we create a pointer variable we are gonna store the memory adress of another variable


int main ()
{
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';
	int * p_age = &age;
	double * p_gpa = &gpa;
	char * p_grade = &grade;
	
	printf ("\n--------Memory Adresses--------\n");
	printf ( "age: %p\ngpa: %p\ngrade: %p", &p_age, &p_gpa, &p_grade );  // fisical memory adresses
	
	
	return 0;
}
