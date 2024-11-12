#include "headers.h"

void add_numbers( int num1, int num2 )
{
	printf("The result of addition : %d\n", num1 * num2 )
}

int main()
{
	int first_num = 0, second_num = 0;
	char string[40];
	float result;
	char operation = 'D', break_loop;

	printf("Sample Two Number Calculator\n");

	do
	{

		__fpurge(stdin);
		printf("Enter the operation to be done\n");
		printf("Avaliable Operations[ +, -, *, /, ^, %%]: " );
		scanf("%40[^\n]", string );

		extract_numbers( string, &first_num, &second_num, &operation);

		switch( operation )
		{
			case '+':
				//Addition
				add_numbers( first_num, second_num );
				break;
			case '-':
				//Subtraction
				result = first_num - second_num;
				printf("The result of subtraction : %g\n", result );

				break;
			case '*':
			case 'x':
				//Multiplication
				result =  first_num * second_num;
				printf("The result of multiplication: %g\n", result );

				break;
			case '/':
				//Division
				//Protection for division by zero
				if( second_num == 0 )
				{
					printf("Error: Divisio  By Zero is not allowed\n");
					return 0;
				}
				result = (float)first_num / second_num;
				break;
				printf("The result of division : %g\n", result );

			case '%':
				//Modulus
				result = first_num % second_num;
				break;
				printf("The result of modulus operation : %g\n", result );

			case '^':
				//Power
				result = 1;
				for( int i = 0 ; i < second_num ; i++ )
				{
					result = result  * first_num;
				}
				printf("The result of operation : %g\n", result );

				break;
			default:
				printf("ERROR: Please Input a valid operator\n");
				goto prompt;
				break;
		}

prompt:
		__fpurge(stdin);
		printf("Do you want to continue [y/n]: ");
		scanf("%c", &break_loop );

		break_loop = tolower( break_loop );

	}while( break_loop != 'n' );

	return 0;
}
