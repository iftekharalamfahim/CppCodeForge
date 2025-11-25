<div><h1 align=center> 05 - Controlling Program Flow</h1></div>  

---
Controlling Program Flow can be divided into three main categories:  
1. _Sequence:_ the default mode of execution, where statements are executed one after another in the order they appear.
2. _Selection:_ `if`, `else if`, `else`, `switch`, `? :`
3. _Iteration:_ `for`, `while`, `do while`, `break`, `continue`

## if Statement
The `if` statement is used to execute a block of code if a specified condition is true. If the condition is false, the block of code is skipped.

```c++
    if(expression) {
        // statement to be executed if expression is true;
    }
```
**Block Statements:** Block statements are used to group multiple statements together. They are enclosed in curly braces `{}`. If the `if` statement is followed by a block statement, all statements within the block will be executed if the condition is true.

```c++
    if(expression) {
        // multiple statements to be executed if expression is true;
        statement1;
        statement2;
        ...
    }
```
## if...else Statement
The `if...else` statement is used to execute one block of code if a specified condition is true, and another block of code if the condition is false.
```c++
    if(expression) {
        // statement to be executed if expression is true;
    } else {
        // statement to be executed if expression is false;
    }
```
## Nested if Statement
An `if` statement can be nested inside another `if` or `else` block to create more complex decision-making structures.
```c++
    if(expression1) {
        // statement to be executed if expression1 is true;
        if(expression2) {
            // statement to be executed if expression2 is true;
        } else {
            // statement to be executed if expression2 is false;
        }
    } else {
        // statement to be executed if expression1 is false;
    }
```
## Switch Statement
- The `switch` statement is used to execute one block of code among multiple options based on the value of a variable or expression. It is often used as an alternative to multiple `if...else` statements when dealing with a single variable that can take on multiple discrete values.
- The control expression in a `switch` statement must evaluate to an integer type (such as `int`, `char`, or an enumeration type).
- Once a matching case is found, the corresponding block of code is executed until a `break` statement is encountered or the end of the `switch` statement is reached.
- Best practice is to include a `default` case to handle any unexpected values.
- Best practice is to provide `break` statements at the end of each case to prevent fall-through, unless intentional.
```c++
    switch(integer_control_expression) {
        case constant1:
            // statement to be executed if expression equals constant1;
            break;
        case constant2:
            // statement to be executed if expression equals constant2;
            break;
        ...
        default:
            // statement to be executed if expression does not match any case;
    }
```
**Break Statement:** The `break` statement is used to exit the `switch` statement once a matching case is found and its corresponding block of code has been executed. If `break` is omitted, the program will continue to execute the subsequent cases (this is known as "fall-through").

## Ternary Operator (Conditional Operator)
- The ternary operator is a shorthand way of writing an `if...else` statement. 
- It takes three operands: a condition, a value to return if the condition is true, and a value to return if the condition is false.
```c++
    condition ? value_if_true : value_if_false;
```
- The ternary operator is often used for simple conditional assignments or expressions.

## Loops
- Loops are used to execute a block of code repeatedly as long as a specified condition is true. There are three main types of loops in C++: `for`, `while`, and `do...while`.
- Looping is also called iteration.
- Loop is the third building block of programming, along with sequence and selection.
- Loops are made up of three main parts: initialization, condition, and update.
- C++ looping constructs can be classified into two categories: entry-controlled loops and exit-controlled loops.
  - Entry-controlled loops check the loop condition before executing the loop body. Examples include `for` and `while` loops.
  - Exit-controlled loops check the loop condition after executing the loop body. An example is the `do...while` loop.
  - `for`loop iterates a specific number of times, while `while` and `do...while` loops continue iterating as long as a condition is true.
  - `Ranged-based for` loop is a simplified version of the `for` loop that iterates over elements in a collection or array.

## for Loop
The `for` loop is used to execute a block of code a specific number of times.
```c++
    for(initialization; condition; update) {
        // statement(s) to be executed repeatedly;
    }
```
## Range-based for Loop
- The range-based `for` loop is used to iterate over elements in a collection or array.
```c++
    for(data_type variable : collection) {
        // statement(s) to be executed for each element in the collection;
    }
```
- there is auto keyword that can be used to automatically deduce the type of the variable.
```c++
    for(auto variable : collection) {
        // statement(s) to be executed for each element in the collection;
    }
```
## while Loop
The `while` loop is used to execute a block of code repeatedly as long as a specified condition is true.
```c++
    while(condition) {
        // statement(s) to be executed repeatedly;
    }
```
**In Loop always follow the KISS principle: Keep It Simple, Stupid!**
## do...while Loop
The `do...while` loop is similar to the `while` loop, but it guarantees that the block of code will be executed at least once, as the condition is checked after the loop body.
```c++
    do {
        // statement(s) to be executed repeatedly;
    } while(condition);
```
## break Statement
The `break` statement is used to exit a loop or `switch` statement prematurely. When a `break` statement is encountered inside a loop, the loop is terminated immediately, and the program continues with the next statement after the loop.
```c++
    for(initialization; condition; update) {
        if(break_condition) {
            break; // exit the loop if break_condition is true;
        }
        // statement(s) to be executed repeatedly;
    }
```
## continue Statement
The `continue` statement is used to skip the current iteration of a loop and move on to the next iteration. When a `continue` statement is encountered inside a loop, the remaining statements in the current iteration are skipped, and the loop proceeds to the next iteration.
```c++
    for(initialization; condition; update) {
        if(continue_condition) {
            continue; // skip the rest of the loop body if continue_condition is true;
        }
        // statement(s) to be executed repeatedly;
    }
```
## infinite Loop
An infinite loop is a loop that continues to execute indefinitely because the loop's exit condition is never met. Infinite loops can occur unintentionally due to programming errors, or they can be used intentionally in certain scenarios, such as in event-driven programming or server applications that need to run continuously.
```c++
    while(true) {
        // statement(s) to be executed repeatedly;
    }
```
To prevent infinite loops, ensure that the loop's exit condition will eventually be met, and consider implementing a mechanism to break out of the loop if necessary.
## Nested Loops
A nested loop is a loop that is contained within another loop. The inner loop is executed completely for each iteration of the outer loop. Nested loops are often used for tasks that require multiple levels of iteration, such as processing multi-dimensional arrays or generating combinations of values.
```c++
    for(initialization1; condition1; update1) {
        for(initialization2; condition2; update2) {
            // statement(s) to be executed repeatedly;
        }
    }
```
When using nested loops, be mindful of the potential for increased time complexity, as the total number of iterations can grow exponentially with each additional level of nesting.
