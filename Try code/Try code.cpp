/*	Name: Nikolai Decneut
	Problem: create a programming quiz
	Pseudocode:
	get the users name
	give instructions
	ask questions and get answer using switches
	give the use their score
	Notes: none
	Maintenance log:
		Date:		Done:
		11/24/20	created a programming quiz using switches
*/

#include <string>
#include <system_error>
#include <Color.Dlg>

int main()
{

	char sergeantColor = 'r';
	char playerColor = 'b';
	char narratorColor = 'w';
	int color = 0;

	std::string colorMSG(std::string value, char color); {
		 value; ;.append(RST);
		switch (color)
		{
		case 'r':
			value.insert(0, );
			break;
		case 'g':
			value.insert(0, KGRN);
			break;
		case 'b':
			value.insert(0, KBLU);
			break;
		case 'w':
			value.insert(0, KWHT);
			break;
		case 'm':
			value.insert(0, KMAG);
			break;
		case 'y':
			value.insert(0, KYEL);
			break;
		case 'c':
			value.insert(0, KCYN);
			break;
		default:
			break;
		}
}
/*
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

	
	printf(" Welcome to your own adventure where you choose what happens; tell me your name: \n");
	std::string n;
	std::cin >> n;
	fseek(stdin, 0, SEEK_END);
	printf(" Hello %s\n", n.c_str());
	printf(" %s in this story you will be choosing the path of the story.", n.c_str());
	printf(" Based on your decision the character will die or live");
	printf(" please tell me the name of the character in this story: \n");
	std::string m;
	std::cin >> m;
	fseek(stdin, 0, SEEK_END);
	printf("\nThank you %s.\n", n.c_str());
	printf(" Welcome to the main menu, pleae select your adventure.\n");
	printf(" Option 1\n This takes place in a city ravaged by war from the perspective of a lower class participant in a crime cindicate where you must make vital decisions to be able to escape the city.\n");
	printf(" Option 2\n This story puts you in the shoes of a swat team leader and you have to make the right choices if you want to make the bust.\n");
	printf(" Option 3\n Here you are a PoW and if you dont make the right choices you'll be executed.\n");
	int story = 0;
	printf("%s please make your choice\n Option: ", n.c_str());
	scanf_s("%d", &story);
	fseek(stdin, 0, SEEK_END);
	switch (story)
	{
	case 1:
		printf("\n Great choice, cause its not like i only chose to code for this one.");
		break;
	case 2:
		printf("\n sorry this isnt the one i chose to write the code on. Please try again.");
		break;
	case 3:
		printf("\n sorry this isnt the one i chose to write the code on. Please try again.");
		break;
	default:
		printf("\n You didnt even choose one of the options. ");
		break;
	}
	// find a way to loop this until the right decision is made.
	printf("\n\n Welcome to seattle here we live among the few that survived the missle strike, the survivers are in hiding or are serving criminal enterprises for food, shelter and safety. \n  ");
	printf("Welcome to seattle A.K.A the lost city, here you will ; HEY, private wake up! No sleeping on guard duty or ill report you to the master.\n\n");
	int noSleep = 0;
	int beCareful = 0;
	printf(" What is your response to the sergeant.\n");
	printf(" 1.Yes sir, sorry sir!\n 2.Screw off.\n 3.Don't say anything.\n");
	scanf_s("%d", &noSleep);
	fseek(stdin, 0, SEEK_END);
	switch (noSleep)
	{
	case 1:
		printf(" Yea thats what i thought.");
		//expand story
		break;

	case 2:
		printf("What did you say private?");
		printf(" I said, screw off sergeant.");
		printf("\n *you got punched and knocked out*");
		// expand story
		break;

	case 3:
		printf(" Answer me PRIVATE!\n\n");
		printf(" now you have a choice to make will you\n remain silent\n or apologize\n");
		scanf_s("%d", &beCareful);
		fseek(stdin, 0, SEEK_END);
		switch (beCareful)
		{
		case 1:
			printf(" *you got punched and knocked out* ");
			printf(" *you wake up 30 minutes later with a bad headache and notice that a patrol is heading you way for a checkin.*");
			printf(" Oh no, what am i gonna say when the patrol asks why i didnt checkin. Let me go and speak with them and try to get out of this.");
			printf(" Hey private, why didnt you checkin with your report.\n\n");
			printf(" IN HEAD: okay now we have a choice do we snitch on the sergeant or lie for him?\n");
			printf(" 1. the sergeant knocked me out for no reason\n 2. i fell asleep on duty sir\n");
			int dontLie = 0;
			scanf_s("%d", &dontLie);
			fseek(stdin, 0, SEEK_END);
			switch (dontLie)
			{
			case 1:
				printf(" Okay, ill talk to the sergeant about messing with the guards. Thank you private.\n");
				printf(" *okay they are at a meeting now is a perfct time to run, do you?\n");
				printf(" 1. run\n 2. stay at your post.\n");
				int run = 0;
				scanf_s("%d", &run);
				fseek(stdin, 0, SEEK_END);
				switch (run)
				{
				case 1:
					printf("\n You ran and got shot\n GAME OVER.");
					break;
				case 2:
					printf("\n You didnt take the opportunity and they came back and took you to be executed.\n GAME OVER");
					break;
				}
				break;

			case 2:
				printf(" Thats it private your going to detention.");
				break;
			}


		}


	}

	return 0;

}
*/
