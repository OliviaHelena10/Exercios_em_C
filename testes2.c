/* Uma empresa determinou um reajuste salarial de 5% a todos
os seus funcion�rios. Al�m disto, concedeu um abono de R$ 100,00 para aque-
les que recebem at� R$ 750,00. Dado o valor do sal�rio de um funcion�rio,
informar para quanto ele ser� reajustado. */
# include <stdio.h>
# include <stdio.h>

int main ()
{
	float old_salary, new_salary;
	printf ( "Digite o seu antigo sal%crio: ", 134 );
	scanf ( "%f", &old_salary); 
	
	new_salary = old_salary + 5/100;
	
	if ( new_salary < 750.00 )
	{
		float salary100;
		salary100 = new_salary + 100;
		printf ( "A partir de agora voc%c ir%c receber %.2f %c%c", 136, 134, salary100, 82, 36 );
	}
	else
	{
		printf( "A partir de agora voc%c ir%c receber %.2f %c%c", 136, 134, new_salary, 82, 36 );
	}
}
