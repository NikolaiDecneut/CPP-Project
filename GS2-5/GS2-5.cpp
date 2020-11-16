
/*	Name:  Nikolai Decneut
	Problem:  i am in charge of chaterering busses. each bus holds 60 people and the rest will be in vans, each van holds 7 people. 
	Allow the user to give you their name and use it and allow them to choose the number of people that will be on the tour.
	Pseudocode:  
Get the users name
Output app title to the screen
Output instructions to the screen
Declare and initialize variables
Get input from the user
Determine number of busses by dividing people by capacity
Determine number of people in vans by finding remainder (modulus)
Output results to the screen in a way the user can read
	Notes:  it was difficult to understand at first but i understood really quickly.
	Maintenance log:
		Date:		Done:
		11/15/20	lets the user choose how many busses needed to be chartered by choosing the amount of people.
*/

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>

int main()
{
	std::string s;

	printf("Tell me your name? (may not have spaces): ");
	std::cin >> s;
	fseek(stdin, 0, SEEK_END);

	printf("%s", s.c_str()); printf(", you are going to charter people in a bus.\n");
	printf("Each bus holds 60 people.\n");
	printf("Input the number of people going and \n");
	printf("the app will tell you the number of busses needed\n");
	printf("and how many people need to ride in a van.\n");
	printf("(Only full busses will be chartered.)\n\n");


	printf("Input the number of people going : ");

	int people;
	scanf_s("%d", &people);
	fseek(stdin, 0, SEEK_END);

	int busses;
	const int busCapacity = 60;
	busses = people / busCapacity;
	int peopleinVans;
	peopleinVans = people % busCapacity;

	printf("You will need to charter %d bus/busses and %d people will be in vans.\n", busses, peopleinVans);

	const int vanCapacity = 7;
	int vansNeeded;
	vansNeeded = peopleinVans / vanCapacity;

	printf("You will need to charter %d vans for the extra people.\n\n", vansNeeded);
	printf("Press the any key to continue.\n");
	

	return 0;
}
