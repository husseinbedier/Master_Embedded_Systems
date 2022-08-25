/*
 * main.c
 *EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"

int main (){
	 float num1,num2,result;
	char choice;
	printf("Enter operator either+ or - or* or divide  ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &choice);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &num1);
	scanf("%f", &num2);
	switch (choice) {
	case '+':
		result=num1+num2;
		printf("%10.2f%c%10.2f = %10.2f",num1,choice,num2,result);
		break;
	case '-':
		result=num1-num2;
		printf("%10.2f%c%10.2f = %10.2f",num1,choice,num2,result);;
		break;
	case '*':
		result=num1*num2;
		printf("%10.2f%c%10.2f = %10.2f",num1,choice,num2,result);
		break;
	case '/':
		result=num1/num2;
		printf("%10.2f%c%10.2f = %10.2f",num1,choice,num2,result);
		break;

	default:
		printf("\nwrong choice");
		break;
	}return 0;
}


