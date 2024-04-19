/* Uma empresa determinou um reajuste salarial de 5% a todos
os seus funcionários. Além disto, concedeu um abono de R$ 100,00 para aque-
les que recebem até R$ 750,00. Dado o valor do salário de um funcionário,
informar para quanto ele será reajustado. */
# include <stdio.h>
# include <math.h>

int main ()
{
	float old_salary, new_salary;
	printf ( "Digite o seu antigo sal%crio: ", 134 );
	scanf ( "%f", &old_salary); 
	
	new_salary = old_salary + ( old_salary * 5 ) / 100;
	
	if ( new_salary < 750.00 )
	{
		new_salary = new_salary + 100;
		printf ( "A partir de agora voc%c ir%c receber %.2f %c%c", 136, 134, new_salary, 82, 36 );
	}
	else
	{
		printf( "A partir de agora voc%c ir%c receber %.2f %c%c", 136, 134, new_salary, 82, 36 );
	}

	return 0;
}
