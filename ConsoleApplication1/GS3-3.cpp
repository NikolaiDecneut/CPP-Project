

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
	printf(" %s whcih is the wrong statement?\n", n.c_str());
	printf(" 1. printf("")\n 2. float choice = 0\n 3. float choice = 0.0\n 4. Printf("")\n");
	scanf_s("%d", &que1);
	fseek(stdin, 0, SEEK_END);
	switch (que1)
	{
	case 1: 
		int que1 = -0.25;
		printf("wrong\n");
		
		break;
	case 2:
		if (int que1 = 1);
		printf("correct\n");
	
		break;
	case 3:
		if (int que1 = 3);	
		printf("wrong\n");
		
		break;
	case 4:
		if (int que1 = 4);
		printf("correct\n");
		
		break;
	default:
		printf("error incorrect entry\n");
		int que1 = 0;
		break;
	}


	/*
	int choice = 0;
	scanf_s(� % d�, &choice);
	fseek(stdin, 0, SEEK_END);

	switch (choice)
	{
	case 1:
		printf(�Menu item 1\n�);
		// do other stuff here
		break;
	case 2:
		printf(�Menu item 2\n�);
		// do other stuff here
		break;
	case 3:
		printf(�Menu item 3\n�);
		// do other stuff here
		break;
	default:	// default.  In this case an error message
		printf(�That is not a choice on the menu.\n�);
		// do other stuff here
		break;
	}

	printf(�Lots of other stuff needs to happen here.�);
	*/





















	return 0;
}


