#include <iostream> // Includes the iostream library for input and output
#include <string>   // Includes the string library for string manipulation

int main()
{
	// Declare a variables to hold the user's name
	std::string name;
	int age;

	// Prompt the user for their name
	std::cout << "Enter your name: ";
	std::getline(std::cin, name); // Read the user's name from standard input

	// Prompt the user for their age
	std::cout << "Enter your age: ";
	std::cin >> age; // Read the user's age from standard input

	// Output a greeting message
	std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

	return 0; // Return 0 to indicate successful completion of the program
}