# C++ User Input Program  

## Overview  
This simple C++ program prompts the user for their **name** and **age**, then prints a personalized greeting. It's a great starting point for learning **input handling**, **string manipulation**, and **console output** in C++.  

---

## Features  
- Accepts **user input** for both name and age.  
- Handles **string input** properly with `std::getline()`.  
- Outputs a **formatted message** based on the user's input.  

---

## How It Works  
1. The program asks for the user's **name** using `std::getline(std::cin, name)`.  
2. It then prompts the user to **enter their age** using `std::cin >> age`.  
3. The program **displays a greeting message** using `std::cout`.  
4. The execution **ends successfully** with `return 0;`.  

## Code Example  

```cpp
#include <iostream>  // Standard input-output library
#include <string>    // String handling library

int main() {
    std::string name;
    int age;

    // Asking for user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Displaying the output
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}
```
### 🛠️ **How to Open and Run the Program in Visual Studio**  

#### **1 Open Visual Studio**  
- Launch **Visual Studio** on your computer.  
- If you don’t have it installed, you can download it from [Visual Studio's official site](https://visualstudio.microsoft.com/).  

#### **2 Open the Project**  
- Click **File > Open > Project/Solution**.  
- Navigate to the folder where your **project files** are stored.  
- Select **`Input Output Sample.sln`** (or **`Input Output Sample.vcxproj`** if no solution file exists).  

#### **3 Build the Project**  
- Ensure that **C++ is set as the programming language**.  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- If there are no errors, the project will compile successfully.  

#### **4 Run the Program**  
- Click the **"Start" button** or press **F5** to run the program in **Debug Mode**.  
- Alternatively, click **Debug > Start Without Debugging** (`Ctrl + F5`) for a direct execution.  

#### **5 Enter Input**  
- Once the console opens, **follow the prompts** by entering your **name** and **age** when asked.  
- The program will display a personalized **greeting message** based on your input.  

#### **6 Exit and Modify**  
- If needed, edit `Input Output Sample.cpp` to make changes.  
- Save the file, **rebuild**, and run the program again!  

## Learning Resources  
Interested in learning more about C++ input handling? Check out these resources:  
- [C++ Input & Output (GeeksforGeeks)](https://www.geeksforgeeks.org/basic-input-output-c/)  
- [C++ Strings Tutorial (W3Schools)](https://www.w3schools.com/cpp/cpp_strings.asp)  
- [C++ Reference Documentation](https://en.cppreference.com/w/)  

## Contributions  
This program is open for contributions! Feel free to suggest improvements or expand its functionality.  

## Contact  
Got questions or suggestions? Reach out here or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!
