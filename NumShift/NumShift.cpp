#include <iostream>
#include <string>
#include <sstream>
#include <bitset>

using namespace std;

// Function to convert plaintext to binary representation
string textToBinary(string text) {
	string binary = "";
	for (char c : text) {
		binary += bitset<8>(c).to_string() + " "; // Convert each char to an 8-bit binary
	}
	return binary;
}

// Function to convert plaintext to hexadecimal representation
string textToHex(string text) {
	stringstream ss;
	for (char c : text) {
		ss << hex << int(c) << " "; // Convert each char to hex
	}
	return ss.str();
}

// Function to convert binary back to plaintext
string binaryToText(string binary) {
	stringstream ss(binary);
	string segment;
	string text = "";

	while (ss >> segment) {
		text += char(bitset<8>(segment).to_ulong()); // Convert 8-bit binary back to ASCII
	}
	return text;
}

// Function to convert hexadecimal back to plaintext
string hexToText(string hexString) {
	stringstream ss(hexString);
	string segment;
	string text = "";

	while (ss >> segment) {
		int decimalValue;
		stringstream(segment) >> hex >> decimalValue; // Convert hex to int
		text += char(decimalValue); // Convert int to char
	}
	return text;
}

int main() {
	string input;
	cout << "Enter plaintext, binary, or hexadecimal: ";
	getline(cin, input);

	if (input.find_first_not_of("01 ") == string::npos) {
		// Input is binary
		cout << "Binary detected. Converting to text: " << binaryToText(input) << endl;
	} else if (input.find_first_not_of("0123456789abcdefABCDEF ") == string::npos) {
		// Input is hexadecimal
		cout << "Hexadecimal detected. Converting to text: " << hexToText(input) << endl;
	} else {
		// Input is plaintext
		cout << "Plaintext detected." << endl;
		cout << "Binary representation: " << textToBinary(input) << endl;
		cout << "Hexadecimal representation: " << textToHex(input) << endl;
	}
}