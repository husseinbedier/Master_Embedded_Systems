/*
 * main.c
 *EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
 *  Created on: Jul 29, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
 int main(){
	 printf("##########Console-output### \r\n ########################### ");
	 float n1,n2 ;
	 printf("\r\n Enter two numbers:  ");
	 fflush(stdin);fflush(stdout);
	 scanf("%f %f",&n1 ,&n2);
	 printf("Product: %f \n",n1*n2);

	 return 0;
 }
