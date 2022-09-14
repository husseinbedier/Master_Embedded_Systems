/*
 * main.c
 *EX1: Prime Numbers Between two Intervals by Making User-defined
 *  Created on: Aug 16, 2022
 *      Author: hussien_bedier
 *
 */
#include <stdio.h>
int checkPrimeNumber(int number){
	int i, f = 1;
for (i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			f = 0;
			break;
		}
	}

	return f;
}

int main(){
	int n1,n2,j,f;
		printf("Enter two numbers ( intervals) ");
		fflush(stdin);fflush(stdout);
		scanf("%d %d", &n1, &n2);
		printf("Prime numbers between %d and %d are:",n1,n2);
	for (j = n1; j < n2; ++j) {
		f = checkPrimeNumber(j);
		if (f == 1) {

			printf("%d ", j);
		}
	}

	return 0;
}

