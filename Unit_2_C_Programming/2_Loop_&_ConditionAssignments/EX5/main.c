/*
 * main.c
 *EX5: C Program to Check Whether a Character is an Alphabet or not
 *  Created on: Jul 29, 2022
 *      Author: Husssien Bedier
 */
#include "stdio.h"

int main (){
	char character;
	printf("Enter  a  character:  ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &character);
	if ((character>='a'&&character<='z')||(character>='A'&&character<='Z')) {
		printf("%c",character);
		printf(" is	an alphabet \n");
	} else {
		printf("%c",character);
		printf(" is not an alphabet  \n");
	}
	return 0;
}


