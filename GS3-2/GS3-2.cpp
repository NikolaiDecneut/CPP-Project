/*	Name: Nikolai Decneut
	Problem: create a scientific quiz
	Pseudocode:
	get the users name
	give instructions
	ask questions and get answer usiong else if
	give the use their score
	Notes: none
	Maintenance log:
		Date:		Done:
		11/23/20	created a science quiz using else if
*/


#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <string>
#include <xlocinfo>
#include <stdlib.h>
#include <cstdio>
#include <stdbool.h>

int main()
{
	std::string n;
	printf("Tell me your name (no spaces allowed): ");
	std::cin >> n;
	fseek(stdin, 0, SEEK_END);
	printf("%s you will be taking a science quiz with four questions.\n The questions will be listed with their multiple choice answers below.\n Please select the answer you see most fit. ", n.c_str());
	printf("when you are going to give your answer just type the number of the answer.\n\n");
	printf(" %s what are the names of the different types of matter?\n", n.c_str());
	printf(" 1. plasma, gas, solid, liquid\n 2. gas, solid, liquid\n 3. gas, solid, liquid, organism\n 4. none of the above\n");
	int choice = 0;
	scanf_s("%d", &choice);
	fseek(stdin, 0, SEEK_END);
	int que1;
	if (choice == 2)
	{
		printf("wrong");
		que1 = -1;
	}
	else if (choice == 3)
	{
		printf("wrong");
		que1 = -1;
	}
	else if (choice == 4)
	{
		printf("wrong");
		que1 = -1;
	}
	else if (choice == 1)
	{
		printf("correct");
		que1 = 4;
	}
	int que2;
	int choice2 = 0;
	printf("\n\n%s what is the force of gravity in m/s?\n", n.c_str());
	printf(" 1. 9 m/s\n 2. 9.9 m/s\n 3. 9.8 m/s\n 4. 9.0 m/s\n");
	scanf_s("%d", &choice2);
	fseek(stdin, 0, SEEK_END);
	if (choice2 == 1)
	{
		printf("wrong");
		que2 = -1;
	}
	else if (choice2 == 2)
	{
		printf("wrong");
		que2 = -1;
	}
	else if (choice2 == 4)
	{
		printf("wrong");
		que2 = -1;
	}
	else if (choice2 == 3)
	{
		printf("correct");
		que2 = 4;
	}
	int que3;
	int choice3 = 0;
	printf("\n\n%s how many times more bacterial cells does the human body carry compared to human cells?\n", n.c_str());
	printf(" 1. 0x more\n 2. 5x more\n 3. 11.5x more\n 4. 10x more\n");
	scanf_s("%d", &choice3);
	fseek(stdin, 0, SEEK_END);
	if (choice3 == 1)
	{
		printf("wrong");
		que3 = -1;
	}
	else if (choice3 == 2)
	{
		printf("wrong");
		que3 = -1;
	}
	else if (choice3 == 3)
	{
		printf("wrong");
		que3 = -1;
	}
	else if (choice3 == 4)
	{
		printf("correct");
		que3 = 4;
	}
	int score;

	score = que1 + que2 + que3;
	printf("\n\nHere is your score %s\n %d", n.c_str(), score);


	printf("\n%s press any key to continue.\n", n.c_str());

	return 0;

}
