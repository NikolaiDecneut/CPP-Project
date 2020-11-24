/*	Name: Nikolai Decneut
	Problem: create a programming quiz
	Pseudocode:
	get the users name
	give instructions
	ask questions and get answer using switches
	give the use their score
	Notes: none
	Maintenance log:
		Date:		Done:
		11/24/20	created a programming quiz using switches
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
	printf(" Welcome to your computer programming quiz! what is your name: \n");
	std::string n;
	std::cin >> n;
	fseek(stdin, 0, SEEK_END);
	printf(" %s in this quiz you will be given 3 questions and have 4 mulitple choice answers. each question is worth 1 point, if you get the question wrong you will subtracted .25 points\n\n", n.c_str());
	int que1 = 0;
	int answer1;
	printf(" %s whcih is the wrong statement?\n", n.c_str());
	printf(" 1. printf("")\n 2. float choice = 0\n 3. float choice = 0.0\n 4. Printf("")\n");
	scanf_s("%d", &que1);
	fseek(stdin, 0, SEEK_END);
	switch (que1)
	{
	case 1:
		printf("wrong\n");
		answer1 = -.25;
		break;
	case 2:
		printf("correct\n");
		answer1 = 1;
		break;
	case 3:
		printf("wrong\n");
		answer1 = -.25;
		break;
	case 4:
		printf("correct\n");
		answer1 = 1;
		break;
	default:
		printf("error unidentified");
		answer1 = 0;
	}
	printf(" \n%s select what would be valid for a string\n", n.c_str());
	printf(" 1. bobby.\n 2. DaNNy\n 3. S@%?pes\n 4. all of the above are invalid\n");
	int que2 = 0;
	int answer2;
	scanf_s("%d", &que2);
	fseek(stdin, 0, SEEK_END);
	switch (que2)
	{
	case 1:
		printf("wrong");
		answer2 = -.25;
		break;
	case 2:
		printf("correct");
		answer2 = 1;
		break;
	case 3: 
		printf("wrong");
		answer2 = -.25;
		break;
	case 4:
		printf("wrong");
		answer2 = -.25;
		break;
	default:
		printf("error unidentified");
		answer2 = 0;
	}
	printf(" \n%s which of the following is the incorrect comparator.\n", n.c_str());
	printf(" 1. ==\n 2. =!\n 3. <=\n 4. all of the above are valid.\n");
	int que3 = 0;
	int answer3;
	scanf_s("%d", &que3);
	fseek(stdin, 0, SEEK_END);
	switch (que3)
	{
	case 1:
		printf("wrong");
		answer3 = -.25;
		break;
	case 2:
		printf("correct");
		answer3 = 1;
		break;
	case 3:
		printf("wrong");
		answer3 = -.25;
		break;
	case 4:
		printf("wrong");
		answer3 = -.25;
		break;
	default:
		printf("error unidentified");
		answer3 = 0;
		break;
	}
	int score;
	score = answer1 + answer2 + answer3;
	printf("\n\n%s here is your quiz score %d", n.c_str(), score);
	printf("\nPress and key to continue.");

	return 0;
}
