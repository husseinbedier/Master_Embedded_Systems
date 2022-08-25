/*
 * main.c
 *EX3:C Program to Find the Largest Number Among Three Numbers
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"

int main (){
	float num1,num2,num3;
		printf("Enter three numbers: ");
		fflush(stdin);fflush(stdout);
		scanf("%f", &num1);
		scanf("%f", &num2);
		scanf("%f", &num3);
		if (num1>num2&&num1>num3) {
			printf(" Largest number=%10.2f\n",num1);
		} else if (num2>num1&&num2>num3) {
			printf(" Largest number=%10.2f\n",num2);
		}
		else if (num3>num1&&num3>num2) {
			printf(" Largest number=%10.2f\n",num3);
		}
		else {
			printf("  numbers are equal \n");
		}return 0;

	}
