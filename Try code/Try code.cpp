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
	printf("input the values for the ints\n");
	int i1;
	int i2;
	int i3;
	scanf_s("%d", &i1);
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &i2);
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &i3);
	fseek(stdin, 0, SEEK_END);
	if (i1, i2, i3 >= 1)
	{
		printf(" all the values are postive");
	}
	else if (i1, i2 >= 1)
	{
		printf("some of the values are postive");
	}
	else if (i1, i3 >= 1)
	{
		printf("some of the values are positive");
	}
	else if (i2, i3 >= 1)
	{
		printf("some of the values are positive");
	}
	else if (i1, i2, i3 <= 0)
	{
		printf("none of the values are positive");
	}




	return 0;
}
