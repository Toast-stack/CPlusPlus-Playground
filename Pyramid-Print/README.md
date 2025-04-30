# 📐 Equilateral Triangle Pattern in C++  

## 📌 Overview  
This C++ program prints an **equilateral triangle pattern** using nested loops. It follows the tutorial from **GeeksforGeeks**:  
🔗 [C++ Program to Print Triangle Pattern](https://www.geeksforgeeks.org/cpp-program-to-print-triangle-pattern/)  

While the core logic remains the same, **minor tweaks** were made in the form of **code comments** to improve readability and explain the program’s functionality.

## 🛠 Features  
✔ Uses **nested loops** to create a structured triangle pattern  
✔ Aligns stars (`*`) using **leading spaces** for symmetry  
✔ Includes **improved comments** to clarify each step  

## 📜 Code Breakdown  

```cpp
#include <iostream>  // Standard input-output library
using namespace std;

int main() {
    int n = 5;  // Number of rows in the triangle

    // Outer loop controls the number of rows
    for (int i = 1; i <= n; i++) {  

        // First inner loop prints leading spaces (for alignment)
        for (int j = 0; j < n - i; j++)  
            cout << " ";  // Adding spaces for proper centering

        // Second inner loop prints '*' followed by a space (to maintain structure)
        for (int j = 1; j <= i; j++)  
            cout << "* ";  // Print '*' with spacing for proper formatting

        cout << endl;  // Move to the next row for a new line
    }

    return 0;  // Program execution ends successfully
}
```

## 📊 Example Output (for `n = 5`)  

```
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
```

## 🚀 How to Run in Visual Studio  

### **1️⃣ Open Visual Studio**  
- Launch **Visual Studio** on your computer.  

### **2️⃣ Create a New Project**  
- Click **File > New > Project**.  
- Select **C++ Console App** or **Empty Project**.  
- Name it **TrianglePattern** and click **Create**.  

### **3️⃣ Add the Code**  
- Inside **Solution Explorer**, right-click **Source Files** > **Add** > **New Item**.  
- Select **C++ File (.cpp)**, name it **triangle.cpp**, and paste the code above.  

### **4️⃣ Build the Project**  
- Click **Build > Build Solution** or press **Ctrl + Shift + B**.  
- Ensure there are no errors before proceeding.  

### **5️⃣ Run the Program**  
- Click **Debug > Start Without Debugging** (`Ctrl + F5`).  
- The triangle pattern will be displayed in the console.  

## 📚 Learning Resources  
Want to learn more about **nested loops, patterns, and formatting in C++**? Check out these guides:  
- [Original GeeksforGeeks Tutorial](https://www.geeksforgeeks.org/cpp-program-to-print-triangle-pattern/)  
- [C++ Loops (GeeksforGeeks)](https://www.geeksforgeeks.org/loops-in-cpp/)  
- [C++ Output Formatting (cplusplus.com)](https://cplusplus.com/reference/iostream/manipulators/)  
- [C++ Reference Documentation](https://en.cppreference.com/w/)  

## 🤝 Contributions  
This project is open for contributions! Feel free to suggest improvements or different pattern types.  

## 📫 Contact  
Got questions or suggestions? Reach out **here** or through [LinkedIn](https://www.linkedin.com/in/zachary-nicholas1341/)!  
