# 🔢 C++ Calculator  

## 📌 Overview  
This C++ calculator program is designed to **teach switch statements and basic mathematical operations**. It allows users to perform various calculations, including **addition, subtraction, multiplication, division, exponentiation, modulus, square root, and percentage calculations**.  

## 🛠 Features  
✔ Supports basic operations: `+`, `-`, `*`, `/`  
✔ Handles advanced math functions: `^` (exponentiation), `%` (modulus), `r` (square root), `p` (percentage)  
✔ Error handling for division by zero  
✔ Uses **switch statements** for structured decision-making  


## 📜 Code Example  

```cpp
#include <iostream>
#include <cmath>  

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /, ^, %, r for square root, p for percentage): ";
    std::cin >> operation;

    if (operation != 'r') {
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    switch (operation) {
        case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
        case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
        case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
        case '/': 
            if (num2 != 0) std::cout << "Result: " << num1 / num2 << std::endl;
            else std::cout << "Error: Division by zero is not allowed." << std::endl;
            break;
        case '^': std::cout << "Result: " << pow(num1, num2) << std::endl; break;
        case '%': std::cout << "Result: " << fmod(num1, num2) << std::endl; break;
        case 'r': std::cout << "Result: " << sqrt(num1) << std::endl; break;
        case 'p': std::cout << "Result: " << (num1 * num2) / 100 << "%" << std::endl; break;
        default: std::cout << "Invalid operator. Please use +, -, *, /, ^, %, r, or p." << std::endl;
    }

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
- Select **C++ File (.cpp)**, name it **calculator.cpp**, and paste the code above.  

### **4️⃣ Build the Project**  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- Ensure there are no errors before proceeding.

### **5️⃣ Run the Program**  
- Click **Debug > Start Without Debugging** (`Ctrl + F5`).  
- Enter numbers and choose an operator when prompted.  
- View results directly in the console.  

## 📚 Learning Resources  
Want to learn more about **C++ switch statements and math functions**? Check out these guides:  
- [C++ Switch Statement (GeeksforGeeks)](https://www.geeksforgeeks.org/switch-statement-in-cpp/)  
- [C++ Math Functions (cplusplus.com)](https://cplusplus.com/reference/cmath/)  
- [The C++ Programming Language by Bjarne Stroustrup](https://www.stroustrup.com/)  

## 🤝 Contributions  
This project is open for contributions! Feel free to suggest improvements or additional functionality.  

## 📫 Contact  
Got questions or suggestions? Reach out [here](#) or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!  
