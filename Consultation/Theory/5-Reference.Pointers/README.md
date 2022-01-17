# Референция/Reference

Алтернативно име за съществуваща променлива.  
Променлива може да бъде декларирана като референция чрез ‘ & ’.  
Ако функция получи референция към променлива, тя може да променя(modify) стойността на променливата(директно).  
Може да предотврати копирането на големи структури от данни.  

```c++
    #include<iostream> 
    using namespace std; 

    int main() 
    { 
      int x = 10; 

      // ref is a reference to x. 
      int &ref = x; 

      // Value of x is now changed to 20 
      ref = 20; 
      cout << "x = " << x << endl ; 

      // Value of x is now changed to 30 
      x = 30; 
      cout << "ref = " << ref << endl ; 

      return 0; 
    }
```
```
    Output:
    x = 20
    ref = 30
```

```c++
        #include<iostream> 
        using namespace std; 

        void swap (int& first, int& second) 
        { 
            int temp = first; 
            first = second; 
            second = temp; 
        } 

        int main() 
        { 
            int a = 2, b = 3; 
            swap( a, b ); 
            cout << a << " " << b; 
            return 0; 
        }
```
```
        Output:
        3 2 
```

```c++
        struct Student { 
           string name; 
           string address; 
           int rollNo; 
        };

        // If we remove & in below function, a new 
        // copy of the student object is created.  
        // We use const to avoid accidental updates 
        // in the function as the purpose of the function 
        // is to print s only. 
        void print(const Student &s) 
        { 
            cout << s.name << "  " << s.address << "  " << s.rollNo; 
        }
```

# Указател/Pointer
Променлива, която пази адрес(memory address) като стойност.   
Променливата на указател сочи към типа данни, от същия тип, която е и тя, и се създава чрез оператор „ * “ .   
Адресът на променливата, с която работите, се присвоява на указателя.   

```c++
    int    *ip;    // pointer to an integer
    double *dp;    // pointer to a double
    float  *fp;    // pointer to a float
    char   *ch     // pointer to character
```

Може да съдържа както адреса на някоя променлива, така и празното пространство (nullptr) или някоя непозволена памет(което е източник на грешки).   
Адресът, който съдържа указателят, може да се променя.   
Може да се извършват промени по данните в съответния адрес.      
Указателят е обект, т.е той също притежава адрес.   

*Nullptr*
pointer literal(поинтеров литерал)
Не може да се вземе адреса му с &.
nullptr сочи към адрес 0x00000000.

```c++
    #include <iostream>

    using namespace std;
    int main () {
       int  var1;
       char var2[10];

       cout << "Address of var1 variable: ";
       cout << &var1 << endl;

       cout << "Address of var2 variable: ";
       cout << &var2 << endl;

       return 0;
    }
```

```
    // The address for the variables will be different
    // every time you execute the code above
    
    Output:
    Address of var1 variable: 0xbfebd5c0
    Address of var2 variable: 0xbfebd5b6 
```

```c++
    #include <iostream>

    using namespace std;

    int main () {
       int  var = 20;   // actual variable declaration.
       int  *ip;        // pointer variable 

       ip = &var;       // store address of var in pointer variable

       cout << "Value of var variable: ";
       cout << var << endl;

       // print the address stored in ip pointer variable
       cout << "Address stored in ip variable: ";
       cout << ip << endl;

       // access the value at the address available in pointer
       cout << "Value of *ip variable: ";
       cout << *ip << endl;

       return 0;
    }
```

```
    // The address for the variables will be different
    // every time you execute the code above
    
    Output:
    Value of var variable: 20
    Address stored in ip variable: 0xbfc601ac
    Value of *ip variable: 20
```

```c++
    #include <iostream>

    using namespace std;

    int main () {
        // Pointer which won't be used now
        int *ptrToInt = nullptr;
        
        int a = 5;
        
        ptrToInt = &a;

        return 0;
    }
```

- const int* - pointer to constant variable
- int const* -pointer to constant int

```c++
        #include <stdio.h> 

        int main(){ 
            const int q = 5; 
            int const* p = &q; 

            //Compilation error 
            *p = 7; 

            const int q2 = 7; 

            //Valid 
            p = &q2;  

            return 0; 
        }
```

- int* const - constant pointer to int

```c++
        #include <stdio.h> 

        int main(){ 
            const int q = 5; 
            //Compilation error 
            int *const p = &q; 

            //Valid 
            *p = 7;  

            const int q2 = 7; 

            //Compilation error 
            p = &q2;  

            return 0; 
        }
```

- const int * const - constant pointer to constant int

```c++
        #include <stdio.h> 

        int main(){ 
            const int q = 5; 

            //Compilation error 
            const int* const p = &q; 

            //Compilation error 
            *p = 7; 

            const int q2 = 7; 

            //Compilation error 
            p = &q2; 

            return 0; 
        }
```

Spiral Rule - Bjarne Stroustrup
The rule says, start from the name of the variable and move clockwise to the next pointer or type.   
Repeat until expression ends.   

![spiral_rule_Bjarne_Stroustru](https://media.geeksforgeeks.org/wp-content/uploads/spiral-2.jpg)

Тhe rule can also be seen as decoding the syntax from right to left.   

![apply_spiral_rule_Bjarne_Stroustru](https://media.geeksforgeeks.org/wp-content/uploads/pointer-to-const-int-1.jpg)

```
        int const* is pointer to const int
        int *const is const pointer to int
        int const* const is const pointer to const int
        Using this rule, even complex declarations can be decoded like,
```

```
        int ** const is a const pointer to pointer to an int.
        int * const * is a pointer to const pointer to an int.
        int const ** is a pointer to a pointer to a const int.
        int * const * const is a const pointer to a const pointer to an int.
```
