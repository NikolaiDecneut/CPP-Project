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
    scanf_s("%c",&c);
    fseek(stdin, 0, SEEK_END);
    char d;
    printf("input a maximum for a character variable\n");
    scanf_s("%c",&d);
    fseek(stdin, 0, SEEK_END);
    srand((unsigned)time(NULL));
    int rn;
    float rf;
    char rc;
    rn = a + rand() % (amax - a + 1); _getch;
    printf("output for int :");
    printf("%d\n\n", rn);
    
    rf = b + (float)rand() / (float)RAND_MAX;
    printf("output for float :");
    printf("%f\n\n", rf);
    
    rc = c + rand() % (d - c + 1);
    printf("output for character");
    printf("%c\n\n", rc);




     // i dont understand how to complete the assignment
    
    //srand((unsigned)time(NULL));
    //int die1 = 1;
    //int die1max = 7;
    //int rn;
    //rn = die1 + rand() % (die1max - die1);

    printf("Press any key to continue.\n");
    return 0;
}