<div><h1 align=center> 07 - Characters and Strings</h1></div>  

---
## Characters Functions
- Character handling functions are provided in the `<cctype>` header.
- These functions help in classifying and transforming individual characters.
- Common functions include:  

| Function | Description | Header |
|----------|-------------|--------|
| `isalpha(int c)` | Checks if the character is an alphabetic letter. | `<cctype>` |
| `isdigit(int c)` | Checks if the character is a digit (0-9). | `<cctype>` |
| `isalnum(int c)` | Checks if the character is alphanumeric (letter or digit). | `<cctype>` |
| `isspace(int c)` | Checks if the character is a whitespace character (space, tab, newline, etc.). | `<cctype>` |
| `isupper(int c)` | Checks if the character is an uppercase letter. | `<cctype>` |
| `islower(int c)` | Checks if the character is a lowercase letter. | `<cctype>` |
| `isprint(int c)` | Checks if the character is printable (including space). | `<cctype>` |
|`ispunct(int c)` | Checks if the character is a punctuation character. | `<cctype>` |
| `toupper(int c)` | Converts a lowercase letter to uppercase. | `<cctype>` |
| `tolower(int c)` | Converts an uppercase letter to lowercase. | `<cctype>` |

## C-Style String Functions
- C-style string functions are provided in the `<cstring>` header.
- It is contiguous in memory and terminated by a null character (`'\0'`).
- C-style strings cannot be assigned or copied using the assignment operator (`=`).
- These functions operate on null-terminated character arrays (C-style strings).
- `#include <cstdlib>` is also used for memory manipulation functions. It's used to convert C-style strings to numeric types such as `int`, `long`, `float`, and `double`.
- Include `<cstring>` for string manipulation functions.
- Common functions include:  

| Function | Description | Header |
|----------|-------------|--------|
| `strlen(const char* str)` | Returns the length of a C-style string. | `<cstring>` |
| `strcpy(char* dest, const char* src)` | Copies a C-style string from `src` to `dest`. | `<cstring>` |
| `strcat(char* dest, const char* src)` | Appends the C-style string `src` to the end of `dest`. | `<cstring>` |
| `strcmp(const char* str1, const char* str2)` | Compares two C-style strings lexicographically. | `<cstring>` |
| `strchr(const char* str, int c)` | Finds the first occurrence of character `c` in the C-style string `str`. | `<cstring>` |
| `strstr(const char* haystack, const char* needle)` | Finds the first occurrence of the substring `needle` in the C-style string `haystack`. | `<cstring>` |
| `memset(void* ptr, int value, size_t num)` | Fills the first `num` bytes of the memory area pointed to by `ptr` with the constant byte `value`. | `<cstring>` |
| `memcpy(void* dest, const void* src, size_t num)` | Copies `num` bytes from memory area `src` to memory area `dest`. | `<cstring>` |
| `memmove(void* dest, const void* src, size_t num)` | Copies `num` bytes from memory area `src` to memory area `dest`. The memory areas may overlap. | `<cstring>` |

## C++ String
- C++ provides a more convenient and safer way to handle strings through the `std::string` class in the `<string>` header.
- `std::string` is part of the C++ Standard Library and offers various member functions for string manipulation.
- Common member functions include:  

| Function | Description | Header |
|----------|-------------|--------|
| `length()` or `size()` | Returns the length of the string. | `<string>` |
| `append(const std::string& str)` | Appends the string `str` to the end of the current string. | `<string>` |
| `substr(size_t pos, size_t len)` | Returns a substring starting from position `pos` with length `len`. | | `<string>` |
| `find(const std::string& str)` | Finds the first occurrence of the substring `str` in the string. | `<string>` |
| `replace(size_t pos, size_t len, const std::string& str)` | Replaces a portion of the string starting from position `pos` with length `len` with the string `str`. | `<string>` |
| `c_str()` | Returns a C-style string (null-terminated character array) representation of the string. | `<string>` |

**Concatenation of C++ Strings:**
- C++ strings can be concatenated using the `+` operator or the `append()` member function.
- Example:
```cpp
#include <iostream>
#include <string>
int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::string result = str1 + str2; // Using + operator
    // or
    // str1.append(str2); // Using append() member function
    std::cout << result << std::endl; // Output: Hello, World!
    return 0;
}
```
**Comparison of C++ Strings:**
- C++ strings can be compared using relational operators (`==`, `!=`, `<`, `>`, `<=`, `>=`).
- It compares strings lexicographically based on the ASCII values of their characters.
- Example:
```cpp
#include <iostream>
#include <string>
int main() {
    std::string str1 = "apple";
    std::string str2 = "banana";
    if (str1 < str2) {
        std::cout << str1 << " is less than " << str2 << std::endl;
    } else {
        std::cout << str1 << " is not less than " << str2 << std::endl;
    }
    return 0;
}
```
## C++ String Class Member Functions
- The `std::string` class provides a variety of member functions for string manipulation.
- Some additional member functions include:

| Function                                     | Description                       | Header     |
|----------------------------------------------|-----------------------------------|------------|
| `clear()`                                    | Clears the contents of the string. | `<string>` |
| `empty()`                                    | Checks if the string is empty.    | `<string>` |
| `insert(size_t pos, const std::string& str)` | Inserts the string                |            |
| `str` at position `pos`.                      | `<string>`                        |            |
| `erase(size_t pos, size_t len)`             | Erases a portion of the string starting from position `pos` with length `len`. | `<string>` |
| `replace(size_t pos, size_t len, const std::string& str)` | | Replaces a portion of the string starting from position `pos` with length `len` with the string `str`. | `<string>` |
| `find_first_of(const std::string& str)`       | Finds the first occurrence of any character from the string `str`. | `<string>` |
| `find_last_of(const std::string& str)`        | Finds the last occurrence of any character from the string `str`. | `<string>` |
| `to_string(int value)`                      | Converts an integer to a string.  | `<string>` |
| `stoi(const std::string& str)`                  | Converts a string to an integer.   | `<string>` |
| `at(size_t pos)`                            | Returns a reference to the character at position `pos`. | `<string>` |
| `front()`                                   | Returns a reference to the first character of the string. | `<string>` |
| `back()`                                    | Returns a reference to the last character of the string. | `<string>` |
- These functions provide additional capabilities for manipulating and accessing string data in C++.
- For more details, refer to the official C++ documentation on the `std::string` class.
## Substring Extraction
- The `substr()` member function of the `std::string` class is used to extract substrings from a string.
- It takes two parameters: the starting position and the length of the substring. 
- `object.substr(start_index, length)`
- Example:
```cpp
#include <iostream>
#include <string>
int main() {
    std::string str = "Hello, World!";
    std::string subStr = str.substr(7, 5); // Extracts "World"
    std::cout << subStr << std::endl; // Output: World
    return 0;
}
```
- In this example, `substr(7, 5)` extracts a substring starting from index 7 with a length of 5 characters.  

## C++ Substring Search
- The `find()` member function of the `std::string` class is used to search for a substring within a string.
- It returns the starting index of the first occurrence of the substring, or `std::string::npos` if the substring is not found.
- `object.find(search_string)` 
- Example:
```cpp
#include <iostream>
#include <string>
int main() {
    std::string str = "Hello, World!";
    size_t pos = str.find("World"); // Searches for "World"
    if (pos != std::string::npos) {
        std::cout << "'World' found at index: " << pos << std::endl; // Output: 'World' found at index: 7
    } else {
        std::cout << "'World' not found." << std::endl;
    }
    return 0;
}
```
- In this example, `find("World")` searches for the substring "World" and returns its starting index.

## String Conversion Functions
- C++ provides functions to convert between strings and numeric types.
- Common conversion functions include:  

| Function | Description | Header |
|----------|-------------|--------|
| `std::to_string(int value)` | Converts an integer to a string. | `<string>` |
| `std::to_string(double value)` | Converts a double to a string. | `<string>` |
| `std::stoi(const std::string& str)` | Converts a string to an integer. | `<string>` |
| `std::stod(const std::string& str)` | Converts a string to a double. | `<string>` |
- Example:
```cpp
#include <iostream>
#include <string>
int main() {
    int num = 42;
    std::string strNum = std::to_string(num); // Convert int to string
    std::cout << "String: " << strNum << std::endl; // Output: String: 42
    std::string str = "3.14";
    double numDouble = std::stod(str); // Convert string to double
    std::cout << "Double: " << numDouble << std::endl; // Output: Double: 3.14
    return 0;
}
```
- In this example, `std::to_string()` converts an integer to a string, and `std::stod()` converts a string to a double.

## C++ Raw String Literals
- Raw string literals allow you to include special characters and escape sequences in strings without needing to escape them.
- They are defined using the syntax `R"(raw_string)"`, where `raw_string` can contain any characters, including newlines and quotes.
- Example:
```cpp
#include <iostream>
#include <string>
int main() {
    std::string rawStr = R"(This is a raw string literal.
It can span multiple lines and include "quotes" and \backslashes\ without escaping.)";
    std::cout << rawStr << std::endl;
    return 0;
}
```
- In this example, the raw string literal allows for multi-line text and special characters without the need for escape sequences.
- Raw string literals are particularly useful for regular expressions, file paths, and other scenarios where escaping characters would be cumbersome.
## C++ String Input and Output
- C++ provides convenient ways to handle string input and output using the standard input/output streams.
- For input, you can use `std::cin` to read strings from the standard input.
- For output, you can use `std::cout` to print strings to the standard output.
- Example:
```cpp 
#include <iostream>
#include <string>
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Read a line of text into the string
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
```
- In this example, `std::getline()` is used to read a full line of input into the `name` string, allowing for spaces in the input.
- The output is then printed using `std::cout`, demonstrating how to work with strings in C++ for both input and output.
- `getline` is particularly useful for reading strings that may contain spaces, as it reads until a newline character is encountered.