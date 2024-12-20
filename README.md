# Project: Inheritance Example in C++

## Description
This project demonstrates fundamental concepts of Object-Oriented Programming (OOP) in C++, such as inheritance, polymorphism, and encapsulation. It includes two main classes:

1. **`base`**: A base class containing methods to compute a sum and display attributes. It provides attributes common to all derived objects.
2. **`derive`**: A derived class that extends the functionality of the `base` class by adding an additional attribute and a method to display extra information.

## File Contents

### 1. **`base.h`**
Header file for the `base` class.  
It contains:
- Declarations for the constructor, public methods, and accessors.
- The virtual method `display_results()` to enable overriding in derived classes.

### 2. **`base.cpp`**
Implementation file for the `base` class.  
It defines:
- The logic for the `somme` method, which calculates the sum of the inputs and stores the result in the `c` attribute.
- The `display_results` method to print the attributes of the `base` class.

### 3. **`derive.h`**
Header file for the `derive` class.  
It contains:
- Declarations for an additional attribute `d`.
- An override of the `display_results()` method to display the derived class attributes.

### 4. **`derive.cpp`**
Implementation file for the `derive` class.  
It defines:
- The `display_results` method, which overrides the `base` class version to include the `d` attribute.

### 5. **`main.cpp`**
The program's entry point.  
It:
- Demonstrates instantiation of `base` and `derive` objects.
- Illustrates polymorphism by calling `display_results` through a pointer to the base class.

## Usage Instructions

### 1. **Compilation:**
- Ensure you have a C++ compiler supporting the C++11 standard or higher (e.g., GCC or Clang).
- Compile the project using the following command:
  ```bash
  g++ main.cpp base.cpp derive.cpp -o inheritance_example
