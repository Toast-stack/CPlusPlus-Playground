// C++ program to print
// equilateral triangle
#include <iostream> // Standard input-output library
using namespace std;

// Driver code
int main()
{
	int n = 5; // Defines the number of rows in the triangle

	// ith row has n-i leading spaces
	// and i elements
	for (int i = 1; i <= n; i++) { // Outer loop controls the number of rows
		// n-i leading spaces
		for (int j = 0; j < n - i; j++) // First inner loop prints leading spaces (for alignment)
			cout << " ";

		// i elements
		for (int j = 1; j <= i; j++) // Second inner loop prints '*' followed by a space (to maintain structure)
			cout << "* ";
		cout << endl; // Moves to the next row
	}
	return 0; // Program execution ends

}
