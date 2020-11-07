/*
Name:  Nikolai Decneut
	Problem:  some division problems using ints and floats
	Pseudocode:  
		Declare + activate variables
		Do some math and output results to screen
		Show modulus and output to screen
	Notes:  i dont understand this completetly yet
	Maintenance log:
		Date:		Done:
		11/3/20			some division

*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
int main()

{
	printf("Division problems.\n");
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
	z = t / b

	//2 addition problems
	printf("Addition problems. \n");
	c = i + b;
	printf("i + b = %d \n", c);
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
	//printf("modulus is %d\n", modAnswer);
}