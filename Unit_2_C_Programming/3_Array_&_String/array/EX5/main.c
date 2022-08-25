/*
 * main.c
 *EX5: C Program to Search an element in Array
 *  Created on: Aug 7, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter no of elements ");
	fflush(stdin);fflush(stdout);
	int a[100],i,num,element,found;
	scanf("%d", &num);
	printf("\nEnter the values :");
	fflush(stdin);fflush(stdout);
	for (i = 0; i < num; ++i) {
		scanf("%d", &a[i]);
	}
	printf("\nEnter the elements to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);
	found=0;
	for (i = 0; i < num; ++i) {
		if (a[i]==element) {
			found=1;
			break;
		}
	}
	if (found==1) {
		printf("Number found at the location = %d", i + 1);

	} else {
		printf( "Number not found") ;
	}
	return 0;
}

