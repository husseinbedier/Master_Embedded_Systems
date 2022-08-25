/*
 * main.c
 *EX3: C Program to Find Transpose of a Matrix
 *  Created on: Aug 7, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter rows and column of matrix:");
	fflush(stdin);fflush(stdout);
	int a[10][10];
	int t[10][10];
	int r,c,rows,column;
	scanf("%d %d",&rows ,&column);

	printf("\nEnter elements of matrix:\n");
	for (r = 0; r < rows; ++r) {
		for (c = 0; c < column; ++c) {

			printf("Enter elements a%d%d: ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%d", &a[r][c]);
		}

	}
	printf("\n Entered Matrix:\n");
	for (r = 0; r < rows; ++r) {
		for (c = 0; c < column; ++c) {

			printf("%d\t",a[r][c]);
			if (r==column-1) {
				printf("\n\n");
			}

		}
		printf("\r\n");

	}
	for (r = 0; r < rows; ++r) {
		for (c = 0; c < column; ++c) {

			t[c][r]=a[r][c];
		}

	}
	printf("\n Transpose of Matrix:\n");
	for (r = 0; r < column; ++r) {
		for (c = 0; c < rows; ++c) {

			printf("%d\t",t[r][c]);
			if (c==rows-1) {
				printf("\n\n");
			}

		}


	}

	return 0;
}
