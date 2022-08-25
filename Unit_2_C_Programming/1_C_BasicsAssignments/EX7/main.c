/*
 * main.c
 *EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
 *  Created on: Jul 29, 2022
 *      Author: Hussien Bedier
 */

#include "stdio.h"

int main(){
	printf("##########Console-output### \n");
	double a,b,c ;
	printf("Enter value of a: ");
	scanf("%lf", &a);
	printf("\n Enter value of b: ");
	scanf("%lf", &b);
    a=a-b;
	b=a+b;
	a=b-a;
	printf("\n After swapping, value of a = %lf \n",a);
	printf("After swapping, value of b = %lf \n",b);
	return 0;
}
