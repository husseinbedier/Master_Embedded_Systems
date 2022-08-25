/*
 * main.c
 * EX1: Example of Multidimensional Array In C
Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where,
elements of matrix are entered by user.
 *  Created on: Aug 7, 2022
 *      Author: Hussien Bedier
 */

#include "stdio.h"
#include  "string.h"

int main(){

	printf("Enter the elements of 1st matrix\n");
	float a[2][2];
	float b[2][2];
	float total[2][2];

	int r,c;

	for (r = 0; r < 2; ++r) {
		for (c = 0; c < 2; ++c) {

			printf("\n Enter a%d%d degree : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &a[r][c]);
		}

	}
	printf("\nEnter the elements of 2nd matrix\n");
	for (r = 0; r < 2; ++r) {
			for (c = 0; c < 2; ++c) {

				printf("\n Enter b%d%d degree : ",r+1,c+1);
				fflush(stdin);fflush(stdout);
				scanf("%f", &b[r][c]);
			}

		}
	for (r = 0; r < 2; ++r) {
		for (c = 0; c < 2; ++c) {

			total[r][c]=a[r][c]+b[r][c];
		}

	}
	printf("\n Sum Of Matrix:\n");
	for (r = 0; r < 2; ++r) {
		for (c = 0; c < 2; ++c) {

			printf("%1.1f\t",total[r][c]);
		}
		printf("\r\n");
	}
	return 0;
}
