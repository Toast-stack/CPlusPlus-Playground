// Largest-Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> // Include the vector library for dynamic storage

int main() {
	int count; // Variable to store the number of elements
	std::cout << "Enter the number of elements: ";
	std::cin >> count; // Read the number of elements from user input

	// Validate that the user enters at least one number
	if (count <= 0) {
		std::cout << "Please enter a positive number of elements." << std::endl;
		return 1; // Exit the program with an error code
	}

	std::vector<int> numbers(count); // Create a vector to store the numbers
	std::cout << "Enter " << count << " numbers: ";

	// Get the numbers from user input
	for (int i = 0; i < count; ++i) {
		std::cin >> numbers[i]; // Read each number into the vector
	}

	// Find the largest number in the vector
	double largest = numbers[0]; // Initialize largest with the first element
	for (int i = 1; i < count; ++i) { // Start from the second element
		if (numbers[i] > largest) { // Compare with the current largest
			largest = numbers[i]; // Update largest if a larger number is found
		}
	}
	// Display the largest number
	std::cout << "The largest number is: " << largest << std::endl;
	
	return 0; // Exit the program successfully
}

