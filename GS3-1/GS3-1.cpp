/*	Name: Nikolai Decneut
	Problem:create and RPG
	Pseudocode:
	Output an introduction to the screen (already done)
	Create variables for hit points (your health), damage points (damage you give), and name
	Choose max and min for health and hit points and randomly give them to the user
	Address the user by name where appropriate
	Notes: none
	Maintenance log:
		Date:		Done:
		11/16/20	added hitpoints and damage
*/


#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>
int main()
{
	std::string n;
	printf("Tell me your name (no spaces allowed): ");
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





















	return 0;
}
