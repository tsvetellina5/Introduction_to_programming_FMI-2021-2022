## Operator Precedence - Operators are listed top to bottom, in descending precedence.

![precedence_operator](https://i.stack.imgur.com/u3q2E.png)

![precedence_operator_scheme](https://media.geeksforgeeks.org/wp-content/uploads/20190708173715/Operator-Precedence-and-Associativity-2.jpg)

## Literals

- *Integer Literals*

An integer literal can be a decimal, octal, or hexadecimal constant.
A prefix specifies the base or radix:
- 0x or 0X for hexadecimal
- 0 for octal
- nothing for decimal.

An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively.
The suffix can be uppercase or lowercase and can be in any order.

```c++
        212         // Legal
        215u        // Legal
        0xFeeL      // Legal
        078         // Illegal: 8 is not an octal digit
        032UU       // Illegal: cannot repeat a suffix

        // Following are other examples of various types of Integer literals

        85         // decimal
        0213       // octal
        0x4b       // hexadecimal
        30         // int
        30u        // unsigned int
        30l        // long
        30ul       // unsigned long
```

- *Floating-point Literals*

A floating-point literal has an integer part, a decimal point, a fractional part, and an exponent part.
You can represent floating point literals either in decimal form or exponential form.

While representing using decimal form, you must include the decimal point, the exponent, or both and while representing using exponential form, you must include the integer part, the fractional part, or both. The signed exponent is introduced by e or E.

```c++
        3.14159       // Legal
        314159E-5L    // Legal
        510E          // Illegal: incomplete exponent
        210f          // Illegal: no decimal or exponent
        .e55          // Illegal: missing integer or fraction
```

- *Boolean Literals*

There are two Boolean literals and they are part of standard C++ keywords

A value of `true` representing true.
A value of `false` representing false.
- You should not consider the value of true equal to 1 and value of false equal to 0.

- *Character Literals*

Character literals are enclosed in single quotes.
If the literal begins with `L` (uppercase only), it is a wide character literal (e.g., L'x') and should be stored in `wchar_t` type of variable
Otherwise, it is a narrow character literal (e.g., 'x') and can be stored in a simple variable of char type.
A character literal can be a plain character (e.g., 'x'), an escape sequence (e.g., '\t'), or a universal character (e.g., '\u02C0').

There are certain characters in C++ when they are preceded by a backslash they will have special meaning and they are used to represent like newline (\n) or tab (\t).
Here, you have a list of some of such escape sequence codes.

    |Escape sequence|Meaning                                     |
    | ------------- |--------------------------------------------|
    | \\            |	\ character                              | 
    | \'            |	' character                              |
    | \"            |	" character                              |
    | \?            |	? character                              |
    | \a            |	Alert or bell                            |
    | \b            |	Backspace                                |
    | \f            |	Form feed                                |
    | \n            |	Newline                                  |
    | \r            |	Carriage return                          |
    | \t            |	Horizontal tab                           |
    | \v            |	Vertical tab                             |
    | \ooo          |	Octal number of one to three digits      |
    | \xhh . . .    |	Hexadecimal number of one or more digits |

```c++
        #include <iostream>
        using namespace std;

        int main() {
           cout << "Hello\tWorld\n\n";
           return 0;
        }
```
When the above code is compiled and executed, it produces the following result.
```
        Hello   World
```

- *String Literals*

String literals are enclosed in double quotes.
A string contains characters that are similar to character literals: plain characters, escape sequences, and universal characters.
You can break a long line into multiple lines using string literals and separate them using whitespaces.

Here are some examples of string literals. All the three forms are identical strings.
```
        "hello, dear"

        "hello, \

        dear"

        "hello, " "d" "ear"
```

## Defining Constants
- The const Keyword
```c++
        const <type> <variable> = <value>;
```

Following example explains it in detail

```c++
        #include <iostream>
        using namespace std;

        int main() {
           const int  LENGTH = 10;
           const int  WIDTH  = 5;
           const char NEWLINE = '\n';
           int area;  

           area = LENGTH * WIDTH;
           cout << area;
           cout << NEWLINE;
           return 0;
        }
```
When the above code is compiled and executed, it produces the following result
```
        50
```

## Input/ Output - basic *standard library* tools to control your data flow

```c++
    #include <iostream>
    using namespace std;

    void main()
    {
        int g; // Initialize g
        cin >> g; // Input Value to g 
        cout << "Output is: "<< g; // Output g Value
    }
```

## Types - basic *variables* type to handle different data sets

```c++
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
```

- *Arithmetic Operations* - is a mathematical operation that takes two *variables* and performs a calculation on them.

```c++
    int a = 6;
    
    a += 6; // it is the same as a = a + 6; //returns a = 12
    a -= 6; // it is the same as a = a - 6; //returns a = 6
    
    ++a; // it is the same as a = a + 1; //returns a = 7
    --a; // it is the same as a = a - 1; //returns a = 6
    
    a++; // it is the same as return a and then increment a by 1 code: a; a = a + 1; //returns a = 6 and after return a = a + 1;
    a--; // it is the same as return a and then decrement a by 1 code: a; a = a - 1; //returns a = 7 and after return a = a - 1;
```

- *Logical Operations*
Decision based on multiple conditions.
Part of the conditions are logical operators.
The logical operators help us to create logical conditions that lead us to some events.

- *Logical Connections*   
&& -> Logical AND   
|| -> Logical OR    
! -> Logical NOT    
