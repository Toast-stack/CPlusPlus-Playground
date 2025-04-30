# 🔄 NumShift – Binary, Hexadecimal & Plaintext Converter  

## 📌 Overview  
**NumShift** is a **C++ program** that allows users to **convert between plaintext, binary, and hexadecimal formats**. It automatically detects the input type and converts it accordingly.  

This program was built using concepts from the following **GeeksforGeeks tutorials**:  
- [Convert Decimal to Hexadecimal](https://www.geeksforgeeks.org/convert-decimal-to-hexadecimal-in-cpp/)  
- [Convert Binary to Decimal](https://www.geeksforgeeks.org/convert-binary-to-decimal-in-cpp/)  
- [Decimal to Binary Conversion](https://www.geeksforgeeks.org/cpp-program-for-decimal-to-binary-conversion/)  

## 🛠 Features  
✔ **Automatic input detection** (plaintext, binary, or hexadecimal)  
✔ **Bidirectional conversion** between text, binary, and hexadecimal  
✔ **Uses ASCII encoding** for text transformation  
✔ **Whitespace-aware input handling**  

## 📜 Code Breakdown  

```cpp
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
```

## 📊 Example Runs  

### **Plaintext to Binary & Hexadecimal**
```
Enter plaintext, binary, or hexadecimal: Hello
Plaintext detected.
Binary representation: 01001000 01100101 01101100 01101100 01101111 
Hexadecimal representation: 48 65 6c 6c 6f 
```

### **Binary to Plaintext**
```
Enter plaintext, binary, or hexadecimal: 01001000 01100101 01101100 01101100 01101111
Binary detected. Converting to text: Hello
```

### **Hexadecimal to Plaintext**
```
Enter plaintext, binary, or hexadecimal: 48 65 6c 6c 6f
Hexadecimal detected. Converting to text: Hello
```

## 🚀 How to Run in Visual Studio  

### **1️⃣ Open Visual Studio**  
- Launch **Visual Studio** on your computer.  

### **2️⃣ Create a New Project**  
- Click **File > New > Project**.  
- Select **C++ Console App** or **Empty Project**.  
- Name it **NumShift** and click **Create**.  

### **3️⃣ Add the Code**  
- Inside **Solution Explorer**, right-click **Source Files** > **Add** > **New Item**.  
- Select **C++ File (.cpp)**, name it **numshift.cpp**, and paste the code above.  

### **4️⃣ Build the Project**  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- Ensure there are no errors before proceeding.  

### **5️⃣ Run the Program**  
- Click **Debug > Start Without Debugging** (`Ctrl + F5`).  
- Enter **binary, hexadecimal, or plaintext**, and the program will convert it accordingly.  

## 📚 Learning Resources  
Want to learn more about **binary, decimal, hexadecimal, and text encoding in C++**? Check out these guides:  
- [Convert Decimal to Hexadecimal](https://www.geeksforgeeks.org/convert-decimal-to-hexadecimal-in-cpp/)  
- [Convert Binary to Decimal](https://www.geeksforgeeks.org/convert-binary-to-decimal-in-cpp/)  
- [Decimal to Binary Conversion](https://www.geeksforgeeks.org/cpp-program-for-decimal-to-binary-conversion/)  
- [C++ Strings (cplusplus.com)](https://cplusplus.com/reference/string/string/)  
- [C++ STL Algorithms (GeeksforGeeks)](https://www.geeksforgeeks.org/cpp-algorithm-library/)  

## 🤝 Contributions  
This project is open for contributions! Feel free to suggest improvements or additional encoding methods.  

## 📫 Contact  
Got questions or suggestions? Reach out **here** or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!  
