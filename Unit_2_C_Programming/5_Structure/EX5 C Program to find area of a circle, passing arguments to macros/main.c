/*
 * main.c
 *EX5: C Program to find area of a circle, passing arguments to macros.
 *  Created on: Sep 13, 2022
 *      Author:hussien bedier
 */
#include <stdio.h>
#define pi 3.14
#define area(r)(pi*(r)*(r))
int main(){
	float radius,area;
	printf("Enter the radius ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	area=area(radius);
	printf("Area= %0.2f",area);
	return 0;
}

