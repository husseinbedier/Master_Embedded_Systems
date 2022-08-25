/*
 * main.c
 *EX7: C Program to Find Factorial ofa Number
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"
int main (){
	int num,i;
	int fact=1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	if (num>=0) {
		for (i = 1; i <=num; ++i) {
			fact*=i;
		}
		printf("Factorial= %d",fact);
	} else {
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	return 0;
}
