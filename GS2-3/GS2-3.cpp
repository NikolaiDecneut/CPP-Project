#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand((unsigned)time(NULL));
    int die1 = 1;
    int die1max = 7;
    int rn;
    rn = die1 + rand() % (die1max - die1);
    printf("the following is a random number on a 6 sided die.\n");
    printf("% d\n", rn); 
    int die2 = 1;
    int die2max = 13;
    int rn1;
    rn1 = die2 + rand() % (die2max - die2);
    printf("the following is a random number on a 12 sided die.\n");
    printf("% d\n", rn1);
    float num1 = 0.0;
    float num1max = 5.1;
    float rf;
    rf = (float)rand() / (float)RAND_MAX;
    printf("the following is a random number from 0.0 to 5.0\n");
    printf("%f\n", rf);
    char let1 = 'a';
    char let1max = 'z';
    char rc;
    rc = let1 + rand() % (let1max - let1 + 1);
    printf("the following is a random number in the alphabet\n");
    printf("%c\n", rc);

    return 0;    
}

