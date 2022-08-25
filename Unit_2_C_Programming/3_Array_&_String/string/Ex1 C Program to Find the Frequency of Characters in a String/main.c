/*
 * main.c
 *Ex1: C Program to Find the Frequency of Characters in a String
 *  Created on: Aug 8, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	int i,repeat=0,found;
	char text[100],character;
	gets(text);
	printf("Enter a character to find frequency:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &character);
	for (i = 0; text[i]!='\0'; ++i) {
		if (character==text[i]) {
			++repeat;
			found=1;
		}
		else{
			found=0;
		}
	}
	if (found==1) {
		printf("Frequency of %c = %d",character,repeat);
	}
	else {
		printf("character %c not found",character);
	}

	return 0;
}
