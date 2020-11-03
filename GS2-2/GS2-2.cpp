/*
Name:  Nikolai Decneut
	Problem:  do some division problems using ints and floats
	Pseudocode:  
		Declare + activate variables
		Do some math and output results to screen
		Show modulus and output to screen
	Notes:  i dont understand this completetly yet
	Maintenance log:
		Date:		Done:
		11/3/20			some division

*/

#include <conio.h>
#include <stdio.h>

int main()
{
	printf("Division problems.\n\n");
	int i = 5;
	int b = 2;
	int c;
	float x = 6.3;
	float y = 2.4;
	float z;

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
	c = i / (int)y;
	printf("a / y = % d\n", c);
	z = x / (float)b;
	printf("x / b = % f\n", z);

	c = i / b;
	printf("a / b = % d\n", c);
	int d = i % b;
	printf("a % %b = % d\n", d);

	printf("Thank you, Nikolai Decneut");
/*I need to work on this i dont have it memorized at all!*/
	return 0;
}
