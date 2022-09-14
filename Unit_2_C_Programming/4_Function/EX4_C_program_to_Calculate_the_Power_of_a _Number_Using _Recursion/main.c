/*
 * main.c
 *EX4: C program to Calculate the Power of a Number Using Recursion
 *
 *  Created on: Aug 19, 2022
 *      Author: hussien_bedier
 *
 */
#include <stdio.h>
int calc_num_power(int base, int power);
int main(){
	int b,p;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	 scanf("%d", &b);
	printf("Enter power number (positive integer) : ");
	fflush(stdin);fflush(stdout);
	 scanf("%d", &p);
	printf("\n%d^%d = %d",b,p,calc_num_power(b, p));
	//printf("%d ^ %d = %d",b,p,calc_num_power(b, p));
	return 0;
}

int calc_num_power(int base, int power){
if (power!=0) {
	return  base*calc_num_power(base, power-1);
} else {

}
	return  1;
}
