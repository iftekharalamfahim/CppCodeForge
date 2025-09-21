 <div><h1 align=center> 03- Variables and Constants</h1></div>

 ---

## Variables
- A variable is a named storage location in memory that holds a value which can be changed during the execution of a program.
- Variables have 
  - a type, which determines the kind of data they can store (e.g., int, float, char, real number, Person, Account...).
  - a value, which is the actual data stored in the variable (e.g., 10, 3.14, "Ruby"...).
- Variables must be declared before they are used, specifying their type and name.
- A variable value may change.

```c++
age =21;    // compiler error;

//correct way
int age;

age =21;
```
### Variable Declaration and Initialization
**Declaring Variables:**
```c++
     VariableType VariableName;

     int age;
     double price;
     string name;

     Account myAccount;
     Person customer;
```

**Naming Variables:**
- Can contain letters, digits, and underscores (_).
- Must begin with a letter or an underscore. Cannot start with a digit.
- Cannot use C++ reserved keywords (e.g., int, return, if)
- Cannot redeclare a variable in the same scope. Remember that C++ is case-sensitive (e.g., age and Age are different)
- Cannot have spaces in them. 
- If iostream has been included, then you cannot use cin, cout, endl, string, etc. as variable names.
- Be consistent with your naming conventions. For example, use camelCase or snake_case.
- Use meaningful names that describe the purpose of the variable.
- Declare variables close to where they are used.

**Initializing Variables:**
- C++ provides three ways to initialize variables:
```c++
int age = 21;   //C-like initializatio 

int age (21);   //Constructor Initialization

int age {21};   //Uniform Initialization (C++11 and later list initialition syntax)
```
**Global Variables:**
- Global are declared outside the main() and it can be accessed from anywhere in the code.
- Global variables can be accessed from any function in the same file or other files (if declared extern).
- Global variables are initialized to zero by default if not explicitly initialized.

## Primitives Data Types
- C++ provides several built-in primitive data types to store different kinds of data. The most commonly used primitive data types are:
  - `int`: Used to store integer values (whole numbers) without decimal points. Example: `int age = 25;` Integer can be signed and unsigned.
  - `float`: Used to store single-precision floating-point numbers (numbers with decimal points). Example: `float price = 19.99f;`
  - `double`: Used to store double-precision floating-point numbers (more precise than float). Example: `double pi = 3.14159;`
  - `char`: Used to store a single character. Example: `char grade = 'A';`
  - `bool`: Used to store boolean values (true or false). 
- Unlike other languages C++ size and precision of these data types can vary based on the compiler and platform. However, the C++ standard provides minimum size guarantees for these types.
- C++ `#include <climits>` and `#include <cfloat>` provide constants that define the minimum and maximum values for these data types.

**Character Data Type:**

| Type Name | Size/Range                                        |
|-----------|---------------------------------------------------|
| char      | Exactly one byte. At least 8 bits.                |
| char16_t  | At least 16 bits                                  |
| char32_t  | At least 32 bits                                  |
| wchar_t   | Can represent the largest available character set |

**Integer Data Types:**
- Signed Integer Types:
    - Default integer type is signed.

| Type Name            | Size/Range   |
|----------------------|------------------|
| signed short int     | At least 16 bits |
| signed int           | At least 16 bits |
| signed long int      | At least 32 bits |
| signed long long int | At least 64 bits |

- Unsigned Integer Types:
  - Need to use `unsigned` keyword before the type name.

| Type Name              | Size/Range       |
|------------------------|------------------|
| unsigned short int     | At least 16 bits |
| unsigned int           | At least 16 bits |
| unsigned long int      | At least 32 bits |
| unsigned long long int | At least 64 bits |

**Floating-Point Data Types:**
- Represented in scientific notation (e.g., 1.23e4 for 12300).
- Precision and range can vary based on the compiler and platform.

| Type Name   | Size/Typical Range                    |
|-------------|---------------------------------------|
| float       | 7 decimal digits                      |
| double      | No less than float/15 decimal digits  |
| long double | No less than double/19 decimal digits |

**Boolean Data Type:**
- Represents two values: true(any non-zero) and false(0). 

| Type Name | Size/Range     |
|-----------|----------------|
| bool      | Usually 8 bits |

## Sizeof( ) Operator
- The `sizeof` operator is a compile-time operator that returns the size, in bytes, of a data type or a variable.
- It can be used with both primitive data types and user-defined types (like classes and structs).
- The sizeof operator gets there size from `climits` and `cfloat` header files.

## Constants
- A constant is a named storage location in memory that holds a value which cannot be changed during the execution of a program.
- Constants have
  - a type, which determines the kind of data they can store (e.g., int, float, char, real number, Person, Account...).
  - a value, which is the actual data stored in the constant (e.g., 10, 3.14, "Ruby"...).
- Constants must be declared before they are used, specifying their type and name.
- A constant value cannot change.
- C++ gives a programmer different ways to define constants:
  - Using Declared Constants expressions: the `const` keyword
  - Using defined constants: the `#define` preprocessor directive
  - Using Enumerated constants: `enum` for enumerated constants
  - Using Constants expressions: `constexpr` for compile-time constants (C++11 and later)
  - Using literal constants directly in the code. (e.g., x=12. y=1.45, z='A', name="John")

### Literal Constants
- Integer Literals: 12 (an  integer), 12U (an unsigned integer), 12L (a long integer), 12UL (an unsigned long integer) etc..
- Floating-Point Literals: 3.14 (a double), 3.14f (a float), 3.14L (a long double) etc..
- Character Literals Constants (escape codes): \n (newline), \t (tab), \\ (backslash), \' (single quote), \" (double quote) etc..
```c++
cout << "Hello \tthere \nMr. Luo \n"; 
```

### Declared Constants
- Use the `const` keyword to declare a constant variable.
```c++
const double pi {3.1415926};

const int days_in_year {365};

pi = 6.63; // Compiler Error
```

### Defined Constants
- Use the `#define` preprocessor directive to define a constant.
- The `#define` directive is processed by the preprocessor before the compilation of the code.
- Don't use a semicolon at the end of the `#define` directive.
- Don't use defined constants in Modern C++ code.
```c++
#define pi 3.1415926
```