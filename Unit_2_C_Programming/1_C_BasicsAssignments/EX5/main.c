/*
 * main.c
 *EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
 *  Created on: Jul 29, 2022
 *      Author: Hussien Bedier
 */

#include "stdio.h"
int main(){
	printf("##########Console-output### \n ");
	char c ;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c );
	printf("ASCII value of %c",c);
	printf(" = %d \n",c);
	return 0;
}
