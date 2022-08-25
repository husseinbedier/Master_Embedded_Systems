/*
 * main.c
 *EX2: C Program to Calculate Average Using Arrays
 *  Created on: Aug 7, 2022
 *      Author: Hussien Bedier
 */
#include "stdio.h"
#include  "string.h"
int main(){
	printf("Enter the numbers of data:");
	fflush(stdin);fflush(stdout);
	float num[10],sum,average;
	int i,n;
	scanf("%d", &n);
	for (i = 0; i <n; ++i) {
		printf("%d.Enter number:",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &num[i]);
		sum+=num[i];
	}
	average=sum/n;
	printf("Average =%2.2f",average);

	return 0;
}
