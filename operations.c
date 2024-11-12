#include "headers.h"

void add_numbers( int num1, int num2 )
{
	printf("The result of addition : %d\n", num1 + num2 );
}

void subtract_numbers( int num1, int num2 )
{
	printf("The result of subtraction : %d\n", num1 - num2 );
}

void multiply_numbers( int num1, int num2 )
{
	printf("The result of multiplication : %d\n", num1 * num2 );
}

void divide_numbers( int num1, int num2 )
{
	printf("The result of division : %g\n", (float)num1 / num2 );
}

void obtain_modulus( int num1, int num2 )
{
	printf("The result of modulus operation : %d\n", num1 % num2 );
}

void power_operation(int num1, int num2)
{
	int i, result = 1;
	for( i = 0 ; i < num2 ; i++ )
	{
		result = result * num1;
	}

	printf("The result is : %d\n", result );
}

void square_root(int num )
{
	printf("The square root of %d : %lg\n", num, sqrt( num ) );
}
