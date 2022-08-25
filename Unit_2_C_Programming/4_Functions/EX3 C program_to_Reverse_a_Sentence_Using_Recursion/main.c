/*
 * main.c
 *EX3: C program to Reverse a Sentence Using Recursion
 *
 *  Created on: Aug 16, 2022
 *      Author: hussien_bedier
 *
 */
#include <stdio.h>
void ReverseMe();
int main(){
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	ReverseMe();
	return 0;
}
void ReverseMe(){
	char c;
	scanf ("%c", &c) ;
	if( c != '\n' ){
		ReverseMe();
		printf("%c", c);
	}
}
