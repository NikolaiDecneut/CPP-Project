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
	int damage = 15;
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
		scanf_s("%c", &choice);
		fseek(stdin, 0, SEEK_END);
		
		switch (choice)
		{
		case 'A': case 'a':
			equipment = 1;
			equipmentName = "pen";
			ready = true;
			break;
		case 'B': case 'b':
			equipment = 2;
			equipmentName = "Text book";
			ready = true;
			break;
		case 'C': case 'c':
			equipment = 3;
			equipmentName = "Graphing calculater";
			ready = true;
			break;
		default:
			printf("You must choose to arm yourself with something.");
			ready = false;
			break;
		}

		if (equipment != 0)
		{
			printf("A %s is a great choice.", equipmentName.c_str());
		}

		if (!ready)
		{
			continue;
		}

		printf("\n\n\nAre you ready to play the game? >>>   ");
		scanf_s("%c", &choice);
		fseek(stdin, 0, SEEK_END);
		if (toupper(choice) == 'N')
		{
			ready = false;
			printf("\n Okay. Let us equip you again.\n");
		}

	} while (!ready);
	
	bool exit = false;
	int room = 0;
	int timesThrough = 0;

	do
	{
		char choice;
		if (room == 0)
		{
			printf("This is the first room\n");
			printf("Would you like to go to the second room?   (Y/N)  >>>   ");
			scanf_s("%c", &choice);
			fseek(stdin, 0, SEEK_END);
			choice = toupper(choice);
			if (choice == 'Y')
			{
				room = 1;
			}
		}
		else if (room == 1)
		{
			printf("This is the second room\n");
			if (equipment != 1) // not the pen
			{
				printf("You found a Text book.\n");
				printf("Would you like to trade your %s for a Text book?   (Y/N)  >>>  ", equipmentName.c_str());
				scanf_s("%c", &choice);
				fseek(stdin, 0, SEEK_END);
				choice = toupper(choice);
				if (choice == 'Y')
				{
					equipment = 1;
				}
				else
				{
					if (1 <= timesThrough)
					{ 
						printf("Are you sure you do not want the Text book?  (Y/N)  >>>  ");
						scanf_s("%c", &choice);
						fseek(stdin, 0, SEEK_END);
						choice = toupper(choice);
						if (choice == 'N')
						{
							continue; // back to the top of the loop
						}

					}
				}

			}

			printf("\nWould you like to go to the third room?  (Y/N)  >>>  ");
			scanf_s("%c", &choice);
			fseek(stdin, 0, SEEK_END);
			choice = toupper(choice);
			if (choice == 'Y')
			{
				room = 2;
			}
			timesThrough++;
		}
		else if (room == 2)
		{
			printf("This is the third room\n");
			if (equipment != 1)
			{
				printf("\n\nYou do not have a pen. You must go back to the first room.\n");
				room = 0;
				printf("Press any key to go back to the first room.\n\n");
				_getch();
				fseek(stdin, 0, SEEK_END);
			}
			else
			{
				exit = true;
			}
		}

	} while (!exit);

	printf("\n\nWay to go! You made it past all the rooms!\n\n");

	// keep these at the end of the Main()
	printf("\n\nPress any key to exit the game.");
	_getch();
	return 0;
}