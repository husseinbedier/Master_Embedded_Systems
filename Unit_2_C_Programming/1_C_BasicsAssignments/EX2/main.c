/*
 * main.c
 *EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
 *  Created on: Jul 29, 2022
 *      Author: Hussien Bedier
 */

#include "stdio.h"
 int main(){
	 printf("##########Console-output### \n ");
	 int n1 ;
	 printf("Enter a integer: ");
	 fflush(stdin);fflush(stdout);
	 scanf("%d",&n1 );
	 printf("You entered: %d \n",n1);

	 return 0;
 }

