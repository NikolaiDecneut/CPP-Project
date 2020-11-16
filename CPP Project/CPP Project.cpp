// CPP Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
int main()

{
	float float1 = 0.0;
	float float1max = 1.0;
	float rf;
	rf = (float)rand() / (float)RAND_MAX;
	printf("the following is a random number from 0.0 to 1.0\n");
	printf("%f\n", rf);
	int a;
	printf("input a minimum value for a random int: \n");
	scanf_s("%i", &a);
	fseek(stdin, 0, SEEK_END);
	int amax;
	printf("input a  maximum value for a random int: \n");
	scanf_s("%i", &amax);
	fseek(stdin, 0, SEEK_END);
	float b;
	printf("input a minimum for a float variable\n");
	scanf_s("%f", &b);
	fseek(stdin, 0, SEEK_END);
	float e;
	printf("input a maximum for a float variable\n");
	scanf_s("%f", &e);
	fseek(stdin, 0, SEEK_END);
	char c;
	printf("input a minimum for a character variable\n");
	scanf_s("%c", &c);
	fseek(stdin, 0, SEEK_END);
	char d;
	printf("input a maximum for a character variable\n");
	scanf_s("%c", &d);
	fseek(stdin, 0, SEEK_END);
	srand((unsigned)time(NULL));
	int rn;
	char rc;
	rn = a + rand() % (amax - a + 1); _getch;
	printf("output for int :\n");
	printf("%d\n\n", rn);

	rf = b + (float)rand() / (float)RAND_MAX;
	printf("output for float :\n");
	printf("%f\n\n", rf);

	rc = c + rand() % (d - c + 1);
	printf("output for character :\n");
	printf("%c\n\n", rc);




	// i dont understand how to complete the assignment

   //srand((unsigned)time(NULL));
   //int die1 = 1;
   //int die1max = 7;
   //int rn;
   //rn = die1 + rand() % (die1max - die1);

	printf("Press any key to continue.\n");
	return 0;

/*	printf("Division problems.\n");
	int i = 5;
	int b = 2;
	int r = 8;
	int c;
	float x = 6.3;
	float y = 2.4;
	float t = 4.8;
	float z;
// 6 division math problems
	//int
	c = i / b;
	printf("a / b = % d\n", c);
	z = x / y;
	printf("x / y = % f\n", z);
	c = x / y;
	printf(" / y = % d\n", c);
	z = i / b;
	printf("a / b = % f\n", z);
	c = i / y;
	printf("a / y = % d\n", c);
	z = x / b;
	printf("x / b = % f\n", z);
	//float
	z = x / y;
	printf("x / y = %f\n\n", z);
	//mixed divide int by float into int (typecast)
	c = i / y;
	printf("i / y = %d\n\n", c);
	// do modulus division of the same problem as above


	printf("i / y = %d\n\n", c);
	//mixed, divide float by an int into float (typecast)
	z = t / b;

// 2 addition problems
	printf("Addition problems. \n");
	c = i + b;
	printf("i + b = %d \n", c );
	c = r + i;
	printf("r + i = %d\n", c);

// 2 subtraction problems
	printf("Subtraction problems.\n");
	c = i - b;
	printf("i - b = %d \n", c);
	c = r - b;
	printf("r - b = %d\n\n", c);

//2 multiplication problems
	printf("Multiplication problems.\n");
	c = i * b; 
	printf("i * b = %d \n", c);
	c = r * b;
	printf("r * b = %d\n\n", c);

	//this is a practice
	//int answer = 125 / 100;
	//printf("the answer is %d\n", answer);
	//float newAnswer = 125.0 / 100.0;
	//printf("float division answer is %f\n", newAnswer);
	//int modAnswer = 125 % 100;
	//printf("modulus is %d\n", modAnswer); */







/*
Name: Nikolai Decneut
Problem: Write a program that lets the user choose the limits of random numbers and characters. First, find a random float between 0.0 and 1.0 (exclusive of 1.0).
Then, have the user choose upper and lower values for a random int, a random float, and a random character.
You decide whether the maximum values will be included or excluded in the range.
Label the output and output each random item on a separate line.
Pseudocode:
find a float between 0.0 and 1.0
get the user to input a minimum and maximum int variables
get the user to input a minimum and maximum float variables
get the user to input a minimum and maximum character variables
label the output
output each item on a seperate line
Notes:  i dont understand how to do the last part
Maintenance Log :
Date:        Done:
11/15/20        scanf_s code
*/
}

