 <div><h1 align=center> 03- Variables and Constants</h1></div>

 ---

## Variables
- A variable is a named storage location in memory that holds a value which can be changed during the execution of a program.
- Variables have 
  - a type, which determines the kind of data they can store (e.g., int, float, char, real number, Person, Account...).
  - a value, which is the actual data stored in the variable (e.g., 10, 3.14, "Ruby"...).
- Variables must be declared before they are used, specifying their type and name.
- A variable value may change.

```cpp
age =21;    // compiler error;

//correct way
int age;

age =21;
```
### Variable Declaration and Initialization
**Declaring Variables:**
```
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
```cpp
int age = 21;   //C-like initializatio 

int age (21);   //Constructor Initialization

int age {21};   //Uniform Initialization (C++11 and later list initialition syntax)
```

