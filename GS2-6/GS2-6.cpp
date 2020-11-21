/*	Name: Nikolai Decneut
	Problem:  Make an app that calculates a user’s average speed (miles per hour) and average fuel consumption (miles per gallon). 
	Make sure to address the user when you ask for the input. Get the appropriate input from the user (miles traveled, hours traveled, gallons used). 
	Make sure to address the user when you come up with the answer and label the output appropriately. 
	Output the average speed to the nearest mile per hour (mph) and the average fuel consumption to the nearest tenth of a mile per gallon (mpg). 
	(Hint: use float data and printf() using %.1f as the placeholder where 1 (one) is for the number of decimal places.)
	Pseudocode:
get users name
ask for miles travled
ask for hours travled
ask for gallons of fuel used
use miles travled and hours travled to find MPH
use miles travled and fuel used to find MPG

	Notes:  i thought it took a while cause most of this was off memory and looking at old work. but otherwise it wasnt to difficult; it just took time.
	Maintenance log:
		Date:		Done:
	11/15/20		used floats and scanf_s's
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

	printf("Tell me your name? (may not have spaces): ");
	std::cin >> n;
	fseek(stdin, 0, SEEK_END);
	// the code above is for the users name.
	printf("Hello %s this app will calculate your average speed in MPH and estimate how many gallons of fuel were used by your car\n", n.c_str());
	printf("To be able to calculate your speed i will need to know far you traveled in miles, how long you traveled in hours, \nand the gallons of fuel that were used.\n\n");
	printf("%s please input how far you traveled in miles : ", n.c_str());
	float miles;
	scanf_s("%.1f", &miles);
	fseek(stdin, 0, SEEK_END);
	float hours;
	printf("\n\n%s now please tell how long you traveled for in hours : ", n.c_str());
	scanf_s("%.1f", &hours);
	fseek(stdin, 0, SEEK_END);
	float gall;
	printf("\n\nFinal one %s, tell me how many gallons of fuel your car used on your trip : ", n.c_str());
	scanf_s("%.1f", &gall);
	fseek(stdin, 0, SEEK_END);

	float mph;
	mph = miles / hours;
	printf("\n\n%s you were traveling at an average of  %.1f mph\n", n.c_str(), mph);
	float mpg;
	mpg = miles / gall;
	printf("%s if your car used all its gas it would have an estimated %.1f mpg\n\n", n.c_str(), mpg);
	printf(" Press any key to close this window.\n\n");



	return 0;
}