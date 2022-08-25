/*
 * main.c
 *EX1: Write C Program to Check Whether a Number is Even or Odd
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"

int main (){
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	if (num%2==0) {
		printf("%d",num);
		printf(" is even \n");
	} else {
		printf("%d",num);
		printf(" is odd \n");
	}



	return 0;

}

