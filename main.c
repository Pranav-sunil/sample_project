#include "headers.h"

int main()
{
	int first_num, second_num;
	char string[40];
	char operation, break_loop;

	printf("=======Simple Two Number Calculator======\n\n");

	do
	{

		__fpurge(stdin);
		printf("Enter the expression\n");
		printf("Avaliable Operations[ +, -, *, /, ^, %%, ?(sqrt)]: " );
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
				subtract_numbers( first_num, second_num);
				break;
			case '*':
			case 'x':
				//Multiplication
				multiply_numbers( first_num, second_num );
				break;
			case '/':
				//Division
				//Protection for division by zero
				if( second_num == 0 )
				{
					printf("Error: Division  By Zero is not allowed\n");
					break;
				}
				divide_numbers( first_num, second_num );
				break;
			case '%':
				//Modulus
				obtain_modulus( first_num, second_num );
				break;
			case '^':
				//Power
				power_operation( first_num, second_num );
				break;
			case '?':
				//Square root
				//Protection for negative square root prevension
				if( second_num < 0 )
				{
					printf("Error: Square roots of negative numbers are not allowed\n");
					break;
				}
				square_root( second_num );
				break;
			default:
				printf("ERROR: Invalid Input\n");
				goto prompt;
		}

prompt:
		__fpurge(stdin);
		printf("Do you want to continue [y/n]: ");
		scanf("%c", &break_loop );

		break_loop = tolower( break_loop );

	}while( break_loop != 'n' );

	return 0;
}
