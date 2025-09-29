<div><h1 align=center> 05 - Statements and Operators</h1></div>  

---
## Expressions  
- An _expression_ is a sequence of operators and operands that evaluates to a single value.  
- For example, the expression `5 + 3` evaluates to `8`. Expressions can be as simple as a single value or variable, or they can be more complex, involving multiple operators and operands.

## Statements
- A _statement_ is a complete instruction that performs an action. In C++, statements are typically terminated by a semicolon (`;`).  
- Statements usually consist of expressions, but they can also include control structures like loops and conditionals.
- For example, the statement `int x = 5 + 3;` declares a variable `x` and assigns it the value of the expression `5 + 3`.

## Operators
- An _operator_ is a symbol that tells the compiler to perform a specific mathematical, relational, or logical operation and produce a final result.  
- C++ provides a wide range of operators, which can be categorized into several types: unary, binary, and ternary operators.
- Here are some common operators in C++: 
  - _Assignment Operators:_ `=`, `+=`, `-=`, `*=`, `/=`, `%=`
  - _Arithmetic Operators:_ `+`, `-`, `*`, `/`, `%`
  - _Increment and Decrement Operators:_ `++`, `--`
  - _Relational Operators:_ `==`, `!=`, `<`, `>`, `<=`, `>=`
  - _Logical Operators:_ `&&`, `||`, `!`
  - _Member Access Operators:_ `.`, `->`
  - _Bitwise Operators:_ `&`, `|`, `^`, `~`, `<<`, `>>`
  - _Other Operators:_ `sizeof`, `&` (address of), `*` (dereference), `? :` (ternary conditional)

### Assignment Operators
- The assignment operator (`=`) is used to assign a value to a variable.
- C++ is a statically typed language, which means that the type of a variable must be declared before it can be used. The assignment operator is used to assign a value to a variable after it has been declared.
- The value on the right side of the assignment operator is evaluated first, and then the result is assigned to the variable on the left side.
- The value of the right side must be compatible with the type of the left side variable.
- The left side of the assignment operator must be a variable/assignable, not a constant or an expression.
- The assignment operator associates from right to left, meaning that in an expression like `a = b = c`, `b = c` is evaluated first, and then the result is assigned to `a`.

### Arithmetic Operators
- Arithmetic operators are used to perform mathematical operations on numeric values.
- The basic arithmetic operators in C++ are:
  - Addition (`+`): Adds two values together.
  - Subtraction (`-`): Subtracts one value from another.
  - Multiplication (`*`): Multiplies two values together.
  - Division (`/`): Divides one value by another.
  - Modulus (`%`): Returns the remainder of a division operation (only for integers).
- Arithmetic operators follow the standard order of operations (PEMDAS/BODMAS) and can be grouped using parentheses.
- When performing arithmetic operations, C++ automatically promotes smaller data types to larger ones to prevent data loss. For example, when an `int` is added to a `double`, the `int` is promoted to a `double` before the operation is performed.

### Increment and Decrement Operators
- The increment (`++`) and decrement (`--`) operators are used to increase or decrease the value of a variable by one, respectively.
- These operators can be used in two forms: prefix and postfix.
  - Prefix form (`++x` or `--x`): The variable is incremented or decremented before its value is used in an expression.
  - Postfix form (`x++` or `x--`): The variable's current value is used in the expression, and then the variable is incremented or decremented.
- Don't overuse these operators, and never use them twice on the same variable in a single expression, as this can lead to undefined behavior.
- Example:
  ```cpp
  int x = 5;
  int y = ++x; // x is incremented to 6, then y is assigned the value 6
  int z = x--; // z is assigned the value 6 then x is decremented to 5
  ```
### Mixed-Type Expressions
- When an expression involves operands of different types, C++ performs implicit type conversion (also known as type promotion) to ensure that the operation can be performed.
- The rules for implicit type conversion are as follows:
  - If one operand is of a larger type (e.g., `double`) and the other is of a smaller type (e.g., `int`), the smaller type is promoted to the larger type.
  - If both operands are of the same type, no conversion is necessary.
  - If one operand is an integer type and the other is a floating-point type, the integer is converted to a floating-point type.
  - shorter integer types (like `char` and `short`) are promoted to `int` before any arithmetic operation.
- Example:
  ```cpp
  int a = 5;
  double b = 2.5;
  
  double result = a + b; // 'a' is promoted to double, result is 7.5
  ```
**Explicit Type Casting - static_cast< type >**
- In addition to implicit type conversion, C++ also allows for explicit type casting using the `static_cast<type>` operator. This operator is used to convert a value from one type to another explicitly.
- Example:
```c++
  int total_cost {1000};
  int  total_items {80};
  double average_cost {0.0};

  average_cost = total_cost / total_items; // Implicit conversion, results in 12.0
  cout << average_cost << endl;

  average_cost = static_cast<double>(total_cost) / total_items; // Explicit conversion, results in 12.5
  cout << average_cost << endl;
```

### Equality Operators
- The equality operators (`==` and `!=`) are used to compare two values for equality or inequality.
- The `==` operator returns `true` if the two operands are equal, and `false` otherwise.
- The `!=` operator returns `true` if the two operands are not equal, and `false` otherwise.
- Example:
  ```cpp
  int x = 5;
  int y = 10;
  bool isEqual = (x == y); // false
  bool isNotEqual = (x != y); // true
  ```
### Relational Operators
- Relational operators are used to compare two values and determine their relative order.
- The common relational operators in C++ are:

| Operator | Meaning                      |
|----------|------------------------------|
| `>`        | greater than                 |
| `>=`       | greater than or equal to     |
| `<`        | less than                    |
| `<=`       | less than or equal to        |
| `<=>`      | three-way comparison (C++20) |

### Logical Operators
- Logical operators are used to combine multiple boolean expressions and return a single boolean result.
- The common logical operators in C++ are:
  - Logical AND (`&&`): Returns `true` if both operands are `true`.
  - Logical OR (`||`): Returns `true` if at least one operand is `true`.
  - Logical NOT (`!`): Returns `true` if the operand is `false`, and `false` if the operand is `true`.
- Logical precedence: `!` has the highest precedence, followed by `&&`, and then `||`.
- Short-circuit evaluation: In logical expressions, C++ uses short-circuit evaluation, meaning that it stops evaluating as soon as the result is determined. For example, in an `&&` expression, if the first operand is `false`, the second operand is not evaluated because the overall result will be `false` regardless of its value. Same for `||`, if the first operand is `true`, the second operand is not evaluated.

### Compound Assignment Operators
- Compound assignment operators combine an arithmetic operation with assignment. They provide a shorthand way to update the value of a variable.
  - The common compound assignment operators in C++ are:  

  | Operator         | Equivalent Expression |
  |------------------|-----------------------|
  | `+=`             | `x = x + (y)`         |
  | `-=`             | `x = x - (y)`         |
  | `*=`             | `x = x * (y)`         |
  | `/=`             | `x = x / (y)`         |
  | `%=`             | `x = x % (y)`         |
  | `>>=`            | `x = x >> (y)`        |
  | `<<=           ` | `x = x << (y)`        |
  | `&=`             | `x = x & (y)`         |
  | `^=`             | `x =  x ^ (y)`        |
  | ` bitwise or =`  | `x = x bitwise or(y)` |
- Example:
  ```c++
    cost += items * tax;
   // equivalent to cost = cost + (items * tax);
  ```

### Operator Precedence and Associativity
- Operator precedence determines the order in which operators are evaluated in an expression. Operators with higher precedence are evaluated before operators with lower precedence.
  - Associativity determines the order in which operators of the same precedence level are evaluated. Most operators in C++ are left-associative, meaning they are evaluated from left to right. However, some operators, like the assignment operator (`=`), are right-associative, meaning they are evaluated from right to left.
  - Here is a simplified table of operator precedence and associativity in C++: 

| Precedence Level | Operators                                                                                               | Associativity |
|------------------|---------------------------------------------------------------------------------------------------------|---------------|
| 1 (Highest)      | `::` (scope resolution)                                                                                 | Left to Right |
| 2                | `[]`, `->`, `.`, `()`                                                                                   | left to right |
| 3                | `++`, `--` (postfix)                                                                                    | Left to Right |
| 4                | `++`, `--` (prefix), `+`, `-`, `!`, `~` (unary)   `*` (de-ref), `sizeof`                                | Right to Left |
| 5                | `*`, `/`, `%`                                                                                           | Left to Right |
| 6                | `+`, `-`                                                                                                | Left to Right |
| 7                | `<<`, `>>`                                                                                              | Left to Right |
| 8                | `<`, `<=`, `>`, `>=`                                                                                    | Left to Right |
| 8                | `==`, `!=`                                                                                              | Left to Right |
| 10               | `&`                                                                                                     | Left to Right |
| 11               | `^`                                                                                                     | Left to Right |
| 12               | `bitwise or`                                                                                            | Left to Right |
| 13               | `&&`                                                                                                    | Left to Right |
| 14               | `logical OR`                                                                                            | Left to Right |
| 15               | ` = op = ?:` (ternary conditional)                                                                      | Right to Left |
| 16               | `=`, `+=`, `-=`, `*=`, `/=`, `%=` (assignment)                                                          | Right to Left |
| 17               | `,` (comma)                                                                                             | Left to Right |
| 18 (Lowest)      | `()` (function call), `[]` (array subscript), `.` (member access), `->` (member access through pointer) | Left to Right |

