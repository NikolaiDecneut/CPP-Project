/*	Name: Nikolai Decneut
Problem: create an RPG
Pseudocode :
Output an introduction to the screen(already done)
Create variables for hit points(your health), damage points(damage you give), and name
Choose maxand min for healthand hit pointsand randomly give them to the user
Address the user by name where appropriate
Notes : none
Maintenance log :
Date:		Done:
11 / 16 / 20	added hitpoints and damage
*/


//scanf_s("%d", &people);
//fseek(stdin, 0, SEEK_END);
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <string>
int main()
{
	std::string n;
	printf("Tell me your name: ");
	std::cin >> n;
	fseek(stdin, 0, SEEK_END);

	printf("Okay welcome %s to dungeons the RP game.\n", n.c_str());
	printf("In this game you will have to defeat enemies\n");
	printf("explore 25 rooms and defeat a boss.\n\n");
	printf("Welcome to the start menu\n");
	int const damage = 15;
	int health;
	printf("%s please enter how many hitpoints you would like (it may vairy from 100-250, 100 being the hardest and 250 being the easiest: \n", n.c_str());
	scanf_s("%d", &health);
	fseek(stdin, 0, SEEK_END);
	printf("Thank you.\n\n");
	bool ready = false;
	int equipment = 0;
	std::string equipmentName = "";
	do
	{
		char choice;
		printf("\n\nYou get to choose one item before you begin.\n");
		printf("Which would you like?\n");
		printf("\tA. Pen\n");
		printf("\tB. Text book\n");
		printf("\tC. Graphing calculater\n");
		printf(">>>  ");
		scanf("%c", &choice);
		fseek(stdin, 0, SEEK_END);
		ready = true;
		switch (choice)
		{
		case 'A': case 'a':
			equipment = 1;
			equipmentName = "pen";
			break;
		case 'B': case 'b':
			equipment = 2;
			equipmentName = "Text book";
			break;
		case 'C': case 'c':
			equipment = 3;
			equipmentName = "Graphing calculater";
			break;
		default:
			printf("You must choose to arm yourself with something.");
			ready == false;
			break;
		}




		
	}
}	