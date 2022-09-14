/*
 * main.c
 *EX1: C Program to Store Information(name, roll and marks) of a Student
 *  Created on: Sep 13, 2022
 *      Author:hussien bedier
 */
#include <stdio.h>
#include <string.h>
#include <conio.h>
struct Sstudent{
	char m_name[50];
	int m_roll;
	float m_marks;
};
int main(){
	struct Sstudent S;
	printf("Enter information of students:\r\n ");
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s", &S.m_name);
	printf("Enter roll number:  ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &S.m_roll);
	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &S.m_marks);
	printf("Enter information of students:\n ");
	printf("name: %s\n Roll: %d \n Marks: %f\n",S.m_name,S.m_roll,S.m_marks);

	return 0;
}


