#include <iostream>
#include <string>
#include "App.h"

// Private variables
string p_UsersName;

/// Constructor
App::App() {
	p_UsersName = "JohnDoe";
}

/// Destructor
App::~App() {}

string App::GetUsersName() {
	return p_UsersName;
}

/// Gets user's name and greets them
void App::GreetUser() {
	cout << "Hello! What's your name?: ";
	cin >> p_UsersName;
	cout << "Welcome, " << p_UsersName << "!\n";
}
