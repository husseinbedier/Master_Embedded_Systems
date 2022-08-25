/*
 * main.c
 *EX6: C Program to Calculate Sum of Natural Numbers
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"
int main (){
	int num,sum,i;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	for (i = 0; i <=num; ++i) {
		sum+=i;
	}
	printf("Sum= %d",sum);
	return 0;
	}

