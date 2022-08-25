/*
 * main.c
 *EX4: C Program to Insert an element in an Array
 *  Created on: Aug 7, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter no of elements :");
	fflush(stdin);fflush(stdout);
	int a[100],i,n,e,l;
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		printf("%d",i+1);
		a[i]=i+1;
	}

	printf("\nEnter the element to be inserted ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &e);
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &l);

	for (i = n; i >=l; --i) {
	a[i]=a[i-1];
	}

	n++;
	a[l-1]=e;

	for (i = 0; i <n; ++i) {
	printf("%d",a[i]);
		}
	return 0;
}
