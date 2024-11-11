#include "headers.h"

int main()
{
	int first_num, second_num;
	float result;
	char operation, break_loop;

	printf("Sample Two Number Calculator\n");

	do
	{
		printf("Enter the first number : ");
		scanf("%d", &first_num );

		printf("Enter the second  number : ");
		scanf("%d", &second_num );

get_operation:

		__fpurge(stdin);
		printf("Enter the operator( +, -, x, /, %%, ^) : ");
		scanf("%c", &operation );

		switch( operation )
		{
			case '+':
				//Addition
				result = first_num + second_num;
				break;
			case '-':
				//Subtraction
				result = first_num - second_num;
				break;
			case'*':
			case 'x':
				//Multiplication
				result =  first_num * second_num;
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
			case '%':
				//Modulus
				result = first_num % second_num;
				break;
			case '^':
				//Power
				result = 1;
				for( int i = 0 ; i < second_num ; i++ )
				{
					result = result  * first_num;
				}
				break;
			default:
				printf("ERROR: Please Input a valid operator\n");
				goto get_operation;
				break;
		}

		printf("The result : %g\n", result );

		__fpurge(stdin);
		printf("Do you want to continue[y/n]: ");
		scanf("%c", &break_loop );

		break_loop = tolower( break_loop );

	}while( break_loop != 'n' );

	return 0;
}
