/*
 * main.c
 *EX4: C Program to Check Whether a Number is Positive or Negative
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"

int main (){
	float num;
	printf("Enter a number:  ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &num);

	if (num>0) {
		printf("%10.2f",num);
		printf(" is positive. \n");
	}
	else if (num<0) {
		printf("%10.2f",num);
		printf(" is negative . \n");
	}
	else {
		printf("You entered zero.\n");
	}return 0;

}
