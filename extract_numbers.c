#include "headers.h"

//Function to extract the number from the string input by the user
void extract_numbers( char *ip_string, int *first_num, int *sec_num, char *oper)
{
	int temp = 0, neg_flag = 0;

	//Extracting the first number
	while( (*ip_string >= 48 && *ip_string <= 57 ) || *ip_string == '+' || *ip_string == '-' )
	{
		if( *ip_string >= 48 && *ip_string <= 57 )
		{
			temp = (temp*10) + ((*ip_string)-48);
		}
		else if( *ip_string == '-' )
		{
			neg_flag = 1;
		}
		ip_string++;
	}	

	//Assiging the number obtained back to the first_number
	*first_num = neg_flag ? -temp : temp;

	//Skipping spaces
	while( *ip_string == ' ' || *ip_string == '\t' )
	{
		ip_string++;
	}

	*oper = *ip_string++;

	while( *ip_string == ' ' || *ip_string == '\t' )
	{
		ip_string++;
	}

	temp = 0;
	neg_flag = 0;

	//Extracting the second number
	while( (*ip_string >= 48 && *ip_string <= 57 ) || *ip_string == '+' || *ip_string == '-' )
	{
		if( *ip_string >= 48 && *ip_string <= 57 )
		{
			temp = (temp*10) + ((*ip_string)-48);
		}
		else if( *ip_string == '-' )
		{
			neg_flag = 1;
		}
		ip_string++;
	}	

	//Assiging the number obtained back to the second_number
	*sec_num = neg_flag ? -temp : temp;

}
