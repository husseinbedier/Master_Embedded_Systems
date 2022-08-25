/*
 * main.c
 *EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
 *  Created on: Jul 28, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
 int main(){
	 printf("##########Console-output### \n ");
	 int n1,n2 ;
	 printf("Enter two integers: ");
	 fflush(stdin);fflush(stdout);
	 scanf("%d %d",&n1 ,&n2);
	 printf("Sum: %d \n",n1+n2);

	 return 0;
 }


