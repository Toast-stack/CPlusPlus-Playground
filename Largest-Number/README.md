# 🔢 Largest Number Finder  

## 📌 Overview  
This C++ program allows users to input **any number of values** and finds the **largest number** among them. It’s a great way to practice **loops, conditional logic, and working with dynamic arrays (vectors)** in C++.  

## 🛠 Features  
✔ Accepts **multiple numbers** from the user  
✔ Uses **loops** to process input dynamically  
✔ Finds and displays the **largest number** from the list  
✔ Validates **user input** to prevent errors  

## 📜 Code Example  

```cpp
#include <iostream>
#include <vector>  // Include the vector library for dynamic storage

int main() {
    int count;  // Variable to store the number of inputs
    std::cout << "Enter the number of values: ";
    std::cin >> count;

    // Validate that the user enters at least one number
    if (count <= 0) {
        std::cout << "Invalid input. Please enter a positive number!" << std::endl;
        return 1;  // Exit the program with an error code
    }

    std::vector<double> numbers(count);  // Create a vector to store user input
    std::cout << "Enter " << count << " numbers: ";

    // Get user input for the numbers
    for (int i = 0; i < count; i++) {
        std::cin >> numbers[i];
    }

    // Find the largest number
    double largest = numbers[0];  // Initialize with the first number
    for (int i = 1; i < count; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];  // Update largest if a bigger number is found
        }
    }

    // Display the result
    std::cout << "The largest number is: " << largest << std::endl;

    return 0;  // End the program successfully
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
- Select **C++ File (.cpp)**, name it **largest_number.cpp**, and paste the code above.  

### **4️⃣ Build the Project**  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- Ensure there are no errors before proceeding.  

### **5️⃣ Run the Program**  
- Click **Debug > Start Without Debugging** (`Ctrl + F5`).  
- Enter the **number of values** you want to check.  
- Input your **numbers**, and the program will display the **largest one**.  

## 📚 Learning Resources  
Want to learn more about **loops, vectors, and conditional statements** in C++? Check out these guides:  
- [C++ Loops (GeeksforGeeks)](https://www.geeksforgeeks.org/loops-in-cpp/)  
- [C++ Vectors (cplusplus.com)](https://cplusplus.com/reference/vector/vector/)  
- [C++ Reference Documentation](https://en.cppreference.com/w/)  

## 🤝 Contributions  
This project is open for contributions! Feel free to suggest improvements or additional functionality.  

## 📫 Contact  
Got questions or suggestions? Reach out **here** or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!  
