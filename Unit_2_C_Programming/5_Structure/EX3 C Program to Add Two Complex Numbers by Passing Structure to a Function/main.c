/*
 * main.c
 *EX3: C Program to Add Two Complex Numbers by Passing Structure to a Function
 *  Created on: Sep 13, 2022
 *      Author:hussien bedier
 */
#include <stdio.h>
#include <string.h>
#include <conio.h>


struct SComplex {
	double m_R;
	double m_I;
};
struct SComplex SReadComplex(char name[]){
	struct SComplex C;
	printf("For %s complex number\n ", name);
	printf("Enter real and imaginary respectively: ", name);
	fflush(stdin);fflush(stdout);
	scanf("%lf %lf",&C.m_R,&C.m_I);
	return C;
};
struct SComplex AddComplex(struct SComplex A, struct SComplex B){
	struct SComplex C;
	C.m_R=A.m_R+B.m_R;
	C.m_I=A.m_I+B.m_I;
	return C;
};
void PrintComplex(char name[], struct SComplex C){
	printf("%s = %0.2lf + %0.2lfi",name , C.m_R , C.m_I);
}

int main(){
	struct SComplex X ,Y ,Z;
	X= SReadComplex("1st");
	Y= SReadComplex("2nd");
	Z= AddComplex(X,Y);
	PrintComplex("sum", Z);
	return 0;
}
