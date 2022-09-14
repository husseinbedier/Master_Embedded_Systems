/*
 * main.c
 *EX2: C program to Calculate Factorial of a Number Using Recursion
 *
 *  Created on: Aug 16, 2022
 *      Author: hussien_bedier
 *
 */
#include <stdio.h>
int factorial(int num);

int main(){
	int n;

	printf("Enter an positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	printf("Factorial of %d = %d",n,factorial(n));
	return 0;
}
int factorial(int num){

    if(num!=1)
	return num*factorial(num-1);
}
