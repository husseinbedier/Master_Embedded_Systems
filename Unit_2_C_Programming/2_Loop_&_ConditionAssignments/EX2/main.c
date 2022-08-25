/*
 * main.c
 *EX2: C Program to Check Vowel or Consonant
 *  Created on: Jul 29, 2022
*      Author: Husssien Bedier
 */
#include "stdio.h"

int main (){
	char character;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &character);
	if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u') {
		printf("%c",character);
		printf(" is a vowel. \n");
	} else {
		printf("%c",character);
		printf(" is a consonant. \n");
	}
	return 0;
}
