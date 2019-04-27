#include <iostream>
#include <string>
#include "storyMeat.h"

using namespace std;


int main()
{
	//title of the window when launched
	system("title P.T.S.");


	cout << "\n\t\t\t AWAKENING FROM CRYOSTASIS \n\n";

	int but = 50;
	int pp = 20;
	//
	spacers();
	welcome();
	spacers();
	help();
	spacers();
	startingUp();
	spacers();
	goingDown();
	spacers();
	conc();
	spacers();
	Square* square = new Square(0, 0);

	cout << square->x << endl;
	square->x += 1;
	cout << square->x << endl;
	cout << "WARNING.... OXYGEN LEVELS AT " << but << "\n";
	cout << "\n......................\n";
	cout << "WARNING.... NITROGEN LEVELS AT " << pp << "\n";
	SwapValues(but, pp);
	cout << "WARNING.... OXYGEN LEVELS AT " << but << "\n";
	cout << "\n......................\n";
	cout << "WARNING.... NITROGEN LEVELS AT " << pp << "\n";
	spacers();

	//pauses the system
	system("pause");
	return 0;
}