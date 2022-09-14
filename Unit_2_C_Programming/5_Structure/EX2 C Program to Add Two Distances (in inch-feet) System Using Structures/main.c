/*
 * main.c
 *EX2: C Program to Add Two Distances (in inch-feet) System Using Structures
 *  Created on: Sep 13, 2022
 *      Author:hussien bedier
 */
#include <stdio.h>
#include <string.h>
#include <conio.h>
struct SDistance{
	float m_inch;
	float m_feet;
};
struct SDistance SReadDistance(char name[]){
	struct SDistance D;
	printf("Enter information for %s distance \n ",name);
	printf("Enter feet:  ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &D.m_feet);
	printf("Enter inch:  ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &D.m_inch);
	return D;
};
struct SDistance AddDistance(struct SDistance A, struct SDistance B){
	struct SDistance D;
	D.m_inch=A.m_inch+B.m_inch;
	int count=0;
	if (D.m_inch>12.0){
		D.m_inch=D.m_inch-12.0;
	++count;
	}
	D.m_feet=A.m_feet+B.m_feet+count;
	return D;
};

void  PrintDistance(struct SDistance D){
int feet=(int)D.m_feet;

	printf("Sum of distances= %d\'-%0.2f\"",feet,D.m_inch);
}

int main(){
	struct SDistance X,Y,Z;
	X= SReadDistance("1st");
	Y= SReadDistance("2nd");
	Z= AddDistance(X,Y);
	PrintDistance(Z);

	return 0;
}
