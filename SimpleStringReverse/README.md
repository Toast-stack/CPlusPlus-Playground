# 🔄 String Reversal in C++  

## 📌 Overview  
This C++ program reverses a string using the **`reverse()` function** from the Standard Template Library (STL). It is based on the tutorial from **GeeksforGeeks**:  
🔗 [Reverse a String in C++ (Different Methods)](https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/)  

While following this tutorial, **minor tweaks** were made in the form of **code comments** to improve readability and explain the program’s functionality.


## 🛠 Features  
✔ Uses **STL’s `reverse()` function** for efficient string reversal  
✔ Demonstrates **iterators (`begin()` and `end()`)** for modifying strings  
✔ Includes **comments** to clarify each step  

## 📜 Code Breakdown  

```cpp
#include <string>    // Include the string library for handling text
#include <iostream>  // Standard input-output library
using namespace std;

int main() {
    string s = "Hello World";  // Define the string to be reversed

    // Using reverse() function to reverse the string
    reverse(s.begin(), s.end());  // Reverse the string using iterators

    cout << s;  // Output the reversed string
    return 0;   // End the program successfully
}
```

## 📊 Example Output  

```
dlroW olleH
```

## 🚀 How to Run in Visual Studio  

### **1️⃣ Open Visual Studio**  
- Launch **Visual Studio** on your computer.  

### **2️⃣ Create a New Project**  
- Click **File > New > Project**.  
- Select **C++ Console App** or **Empty Project**.  
- Name it **StringReversal** and click **Create**.  

### **3️⃣ Add the Code**  
- Inside **Solution Explorer**, right-click **Source Files** > **Add** > **New Item**.  
- Select **C++ File (.cpp)**, name it **reverse_string.cpp**, and paste the code above.  

### **4️⃣ Build the Project**  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- Ensure there are no errors before proceeding.  

### **5️⃣ Run the Program**  
- Click **Debug > Start Without Debugging** (`Ctrl + F5`).  
- The reversed string will be displayed in the console.  

## 📚 Learning Resources  
Want to learn more about **string manipulation and STL functions in C++**? Check out these guides:  
- [Original GeeksforGeeks Tutorial](https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/)  
- [C++ Strings (cplusplus.com)](https://cplusplus.com/reference/string/string/)  
- [C++ STL Algorithms (GeeksforGeeks)](https://www.geeksforgeeks.org/cpp-algorithm-library/)  

## 🤝 Contributions  
This project is open for contributions! Feel free to suggest improvements or different string reversal methods.  

## 📫 Contact  
Got questions or suggestions? Reach out **here** or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!  
