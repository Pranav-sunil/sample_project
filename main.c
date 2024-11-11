#include "headers.h"

int main()
{
	int first_num, second_num;
       	float result;
	char operation;

	printf("Sample Two Number Calculator\n");

	printf("Enter the first number : ");
	scanf("%d", &first_num );

	printf("Enter the second  number : ");
	scanf("%d", &second_num );

get_operation:

	__fpurge(stdin);
	printf("Enter the operator( +, -, x, /) : ");
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
		default:
			printf("ERROR: Please Input a valid operator\n");
			goto get_operation;
			break;
	}

	printf("The result : %g\n", result );
	
	return 0;
}
