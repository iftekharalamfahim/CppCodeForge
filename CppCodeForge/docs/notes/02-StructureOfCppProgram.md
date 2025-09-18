<div> <h1 align=center>02- Structure of a C++ Program</h1> </div>  

---
## Keywords  
There are certain reserved words in C++ that have special meanings and cannot be used as identifiers (like variable names, function names, etc.). These are known as keywords. C++ has in total 98 keywords. [Here](https://en.cppreference.com/w/cpp/keyword.html) is a complete list of C++ keywords.

## Preprocessor Directives
- Preprocessor is a program that processes the source code before the compiler compiles it.
- Preprocessor directives are lines in the code that start with `#` and provide instructions to the preprocessor.
- The C++ preprocessor does not understand C++. It simply follows the preprocessor directives. 
- The compiler is the program that does understand C++ and translates it into machine code. 
- Common preprocessor directives are: `#include`, `#define`, `#endif` etc. 

## Comments
- Comments are non-executable parts/words that only exist for a programmer to understand the code better.
- The preprocessor strips out the comments before passing the code to the compiler.
- C++ has two types of comments:
  - Single-line comments: Start with `//` and continue to the end of the line.
  - Multi-line comments: Start with `/*` and end with `*/`. They can span multiple lines.
- Keep the comments meaningful and sync with the code. Outdated comments are worse than no comments.
- Keep the comments style consistent throughout the codebase.

## The main( ) function
- Every C++ program must have exactly 1 main() function.
- There are two versions of main():
  - `int main()`
  - `int main(int argc, char *argv[])`

## Namespaces
- Namespaces are used to reduce the possibity of naming conflicts. 
- There are two types of namespaces:
  - Standard namespace: `std`
  - User-defined namespaces
	- In`std` namespace, it's standard to use below format for larger projects instead of `using namespace std`
	``` cpp
	using std::cout;
	using std::cin;
	using std::endl; 
	```
## Basic I/O using `cin` and `cout`  

`cin`, `cout`, `cerr`, and `clog` are objects representing streams.
- `cin` is used for standard input (keyboard).
- `cout` is used for standard output (console).
- `cerr` is used for standard error output (console, unbuffered).
- `clog` is used for standard error output (console, buffered).
- `<<` is the insertion operator used with `cout`.
- `>>` is the extraction operator used with `cin`.

