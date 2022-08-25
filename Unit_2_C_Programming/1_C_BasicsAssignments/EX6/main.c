/*
 * main.c
 *
EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
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
    c=a;
	a=b;
	b=c;
	printf("\n After swapping, value of a = %lf \n",a);
	printf("After swapping, value of b = %lf \n",b);



	return 0;
}









