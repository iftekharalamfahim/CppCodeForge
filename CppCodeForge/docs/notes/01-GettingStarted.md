<div><h1 align=center>IMPORTANT BASICS TO GET STARTED WITH C++ </h1></div>

- All C++ must have exactly one `main` function.
- All code line must end with a semicolon `;`.

## ERRORS IN C++

### Compiler Errors
 - Syntax errors: Mistakes in the code that violate the rules of C++ syntax. 
 ```cpp
 std:: cout << " Errors << std:: endl; //Missing closing quote

 return 0 // Missing semicolon
 ```

 - Type errors: Using a variable in a way that is inconsistent with its typye.
```cpp
 std::cout << "hey" << std:: endll; // typo in endl
```
 - Semantic errors: Code that is syntactically correct but does not make sense logically. 
 ```cpp
  int a
  char 'b'

  int add = a + b; //adding an int and a char
 ```
 ### Compiler Warnings
-  **DO NOT IGNORE COMPILER WARNINGS**
- Should have no warning policy in the code.
```cpp
#include <iostrean>
int main(){

int favourite_number;

std::cout << "Hello?" << std::endl;

return 0;
}

//unused variable
```

### Linker Errors
- Occur when the compiler cannot find the definition/lib/obj path of a function or variable that has been declared.
```cpp
#include <iostrean>

extern int x;

int main(){
std::cout << x; // linker err: Undefined reference to 'x' 

return 0;
}
```

### Runtime Errors
- Occur when the program is running.
- **Examples:**
	- Division by zero,
	- accessing out-of-bounds array elements, 
	- dereferencing null pointers, 
	- File not found, 
	- out of memory.
- Exceptions can be used to handle runtime errors gracefully.

### Logic Errors
- When the program runs without crashing but produces incorrect results because of errors or bugs in the code.

```cpp
if (age>18){    // Logical Error; Should be age>=18
std:: cout << "yes, you are an adult!"; 
}
```