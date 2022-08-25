/*
 * main.c
 *EX3: C Program to Reverse String Without Using Library Function
 *  Created on: Aug 9, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
    char text[100];
    int i;
    int length=strlen(text)-1;
    scanf("%s", &text);
	for (i = 0; text[i]!='\0'; ++i){

	printf("%c",text[length-i+1]);

	}
	return 0;
}
