#include <iostream>
#include <string>
#include "storyMeat.h"

using namespace std;


void spacers()
{
	cout << "\n\n";
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "\n\n";
}

void welcome()
{
	system("title Space Escape");

	cout << "\n \"Good Morning Captain. This is your Psychological Test System, I am here to test your cognitive functions\n after ----- years in cryostasis.\"\n\n";
	system("pause");
}

void help()
{
	int number = 4000;
	int * pNumber = &number;  
	cout << pNumber << endl;   
	cout << *pNumber << endl;
	*pNumber = 99;            
	cout << *pNumber << endl; 
	cout << number << endl;   
	string name;
	int age;
	bool playAgain = false; //our flag / switch to paly again or not

	cout << "\n \" Now Initiating Test....\"";
	spacers();
	// ask their name
	cout << "\" Enter You First Name Please, Captain.: \"\n";
	cin >> name;
	cout << "\n \" Captain " << name << " is what you entered.\"\n";
	cout << "\n \" Enter Your Age.: \"\n";
	cin >> age;
	cout << "\n \""<< age << " is what you entered.\"\n";
	system("pause");

	spacers();
	cout << "\n \" The information you have inputted is correct. Now accessing recap files.\"\n";
	cout << "\n \" You are currently in cryostasis pod 4 which is located in the Orion 450, a massive\n spaceship for missions invloved with data collection on alien planets.\"";
	cout << "\n \" We are around 45,000 knots out from the superplanet \"Kronos.\" Which has been slowly pulling us in with its\n insurmountable gravitational pull.\"\n";
	cout << "\n\n \" Now try and see if your muscles atrophied, there is a 50/50 chance of atrophy when in cryostasis while you've been in about....\"\n\n";
		// Local variable declaration:
		int a = 1000;

		// do loop execution
		do {
			cout << "Calculating: " << a << endl;
			a = a + 1000;
			if (a > 6000) {
				// terminate the loop
				break;
			}
		} while (a < 5000);
	cout << "\n \"4,000 years of cryostasis.\" \n";
	system("pause");
}


void startingUp()
{
	//whips tiredly and angrily
	cout << "\n You shakily get up and flex your muscles. You notice that they have gotten smaller but not by too much.\n";
	cout << "\n You throw your legs over the edge of the cryostasis pod and look around\n";
	cout << "\n A large oval window to your left filters in soft orange light from a distant super nova, each shaft of creamsicle\n orange revealing every single dust particle dancing through the air.\n";
	cout << "\n You instinctively cover your mouth due the the shear amount of dust. You stand up and look around more. You notice the \nother cryopods covered in the dust.\n";
	cout << "\n \"Your other team members did not survive the cryostasis and perished.\"\n";
	cout << "\n The intercom above your head echoes out dolefully.\n";
	spacers();
	system("pause");
	//for (int i = 0; i < 1; i++)
	//{
		
	//}
	cout << "\n You tentatively raise your hand to the glass....\n";
	cout << "\n You pull your hand away in shock. You expected it but didn't want it to be true. A gaut and decreptid corpse sits\n deathly still with in the pod.\n";
	cout << "\n You even recognize the body. It was your second in command, Stella Artina. She was a portly hispanic woman who you\n always went to for a second opinion on your descisions for the ship.\n";
	cout << "\n She was the only really rational one on board. Except, she was never mean... Just extremely grounded and methodical.\n";
	cout << "\n You turn around and tear up slightly. You didn't wanna look at the other pods. You didn't wanna look at anything on the ship.\n";
	system("pause");
}

void SwapValues(int& val1, int& val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}

void goingDown()
{
	cout << "\n You queasily hold onto your stomach and walk over to the window. You stare out at the titan like planet in front of\n you.\n";
	cout << "\n It's swirling muted greens and blue remind you of earth and its emerald like oceans. You start to reminisce about your\n life on earth.\n";
	cout << "\n You think of your family. Your strict father, ignorant mother, and supportive brother. You sigh, missing them greatly.\n";
	cout << "\n Due to your career you never found time for a partner or a family of your own. You were never really interested in it\n anyway.\n";
	cout << "\n You are unforunately ripped from your daydreaming when you notice tear ripping through the planet in front of you.\n";
	cout << "\n You watch intently as the tear ravages across the whole planet, then having a large smooth mountain-like structure rises from the surface of the planet\n";
	cout << "\n You stop. Your heart slowly pumping to the terrored thoughts within your mind. A giant deep purple iris, slowly wiggles into the middle of the mass.\n";
	system("pause");
}

void conc()
{
	cout << "\n It's looking at you... The planet has spotted you.\n\n";
}

Square::Square(int xx, int yy) {
	x = xx;
	y = yy;
}