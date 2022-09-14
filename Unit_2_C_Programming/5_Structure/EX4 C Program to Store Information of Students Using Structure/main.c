/*
 * main.c
 *EX4: C Program to Store Information of Students Using Structure
 *  Created on: Sep 13, 2022
 *      Author:hussien bedier
 */
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct SStudents {
	char m_name[50];
	int m_roll;
	float m_marks;
};
struct SStudents SReadStudents(int num, struct SStudents S[num]){

	int i;
	for (i = 0; i < num; ++i) {
		S[i].m_roll=i+1;
		printf("Enter information of students: \n");
		printf("For roll number %d\n", S[i].m_roll);
		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",&S[i].m_name);
		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&S[i].m_marks);
	}
	return S[num];
};
void PrintStudents( struct SStudents S[]){
	int i;
	printf("Displaying information of students: \n");
	for (i = 0; i < 10; ++i) {
		printf("Information for roll number %d\n", S[i].m_roll);
		printf("Name: %s\n", S[i].m_name);
		printf("Marks: %f\n" ,S[i].m_marks);
	}
}


int main(){
	int i=10;
	struct SStudents S[i];
	S[i]=SReadStudents(i, S);

	PrintStudents(S);


	return 0;
}
