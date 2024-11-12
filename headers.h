#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdio_ext.h>
#include<ctype.h>
#include<math.h>

void extract_numbers( char *ip_string, int *first_num, int *sec_num, char *oper );

void add_numbers( int num1, int num2 );

void subtract_numbers(int num1, int num2);

void multiply_numbers(int num1, int num2);

void divide_numbers(int num1, int num2);

void obtain_modulus(int num1, int num2);

void power_operation(int num1, int num2);

void square_root( int num );

#endif
