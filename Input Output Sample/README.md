# 🖥️ C++ Input & Output Program  

## 📌 Overview  
This C++ program is designed to demonstrate **basic user input and output operations** using `std::cin`, `std::getline()`, and `std::cout`. It prompts the user for their **name** and **age** and then prints a personalized greeting message.  

## 🛠 Features  
✔ Accepts **user input** for both name and age  
✔ Handles **string input** properly with `std::getline()`  
✔ Uses **structured comments** to explain C++ input/output operations  
✔ Displays a **formatted output message**  

## 📜 Code Example  

```cpp
#include <iostream>  // Standard input-output library
#include <string>    // String handling library

int main() {
    std::string name; // Variable to store the user's name
    int age;          // Variable to store the user's age

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

## 🚀 How to Run in Visual Studio  

### **1️⃣ Open Visual Studio**  
- Launch **Visual Studio** on your computer.  
- If you don’t have it installed, get it from [Visual Studio](https://visualstudio.microsoft.com/).  

### **2️⃣ Create a New Project**  
- Click **File > New > Project**.  
- Select **C++ Console App** or **Empty Project**.  
- Choose a location and enter a project name.  
- Click **Create**.  

### **3️⃣ Add the Code**  
- Inside **Solution Explorer**, right-click **Source Files** > **Add** > **New Item**.  
- Select **C++ File (.cpp)**, name it **input_output.cpp**, and paste the code above.  

### **4️⃣ Build the Project**  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- Ensure there are no errors before proceeding.  

### **5️⃣ Run the Program**  
- Click **Debug > Start Without Debugging** (`Ctrl + F5`).  
- Enter your **name** and **age** when prompted.  
- View the personalized greeting directly in the console.  


## 📚 Learning Resources  
Want to learn more about **C++ input and output operations**? Check out these guides:  
- [C++ Input & Output (GeeksforGeeks)](https://www.geeksforgeeks.org/basic-input-output-c/)  
- [C++ Strings Tutorial (W3Schools)](https://www.w3schools.com/cpp/cpp_strings.asp)  
- [C++ Reference Documentation](https://en.cppreference.com/w/)  

## 🤝 Contributions  
This program is open for contributions! Feel free to suggest improvements or expand its functionality.  

## 📫 Contact  
Got questions or suggestions? Reach out **here** or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!  
