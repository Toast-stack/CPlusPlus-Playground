#include <string> // Include the string library for handling text
#include <iostream> // Standard input-output library
using namespace std;

int main() {
	string s = "Hello World"; // Define the string to be reversed

	// Using reverse() function to reverse s
	reverse(s.begin(), s.end()); // Reverse the string using iterators

	cout << s; // Output the reversed string
	return 0; // End the program successfully
}
