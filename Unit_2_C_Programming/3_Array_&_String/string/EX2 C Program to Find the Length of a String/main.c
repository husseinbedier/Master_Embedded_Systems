/*
 * main.c
 *EX2: C Program to Find the Length of a String
 *  Created on: Aug 9, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
    char text[100],i;
    scanf("%s", &text);
	for (i = 0; text[i]!='\0'; ++i);
	printf("Length of string: %d",i);
	return 0;
}
