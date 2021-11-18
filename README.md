# C+
Did you ever think why there is no C+ only C++, C & C#? Now it is!

# Instructions:
1. Create file `main.cp`
2. Write your code in file `main.cp`
3. Run file `main.exe` (C+ compiler)
4. Wait for compilation
5. Delete `cp-program.cpp` file (it will be useless for you)
6. Run your `program.exe` program

# Simple Program:
```
using <iostream>
using <stdlib.h>
using <stdio.h>
using <time.h>
namespace std;

def<null> game() {
    srand( time( NULL ) );

    print: "Number Guessing Game! \n";
    int number = rand() % 100 + 1; // number between 1 - 100

    int timeguessing = 1;

    while(1) {
        print: "Guess: ";

        int guessed = 0;
        input: guessed;

        if(guessed == number) {
            print: "You guessed (";
            print: timeguessing;
            print: " time) \n";
            break;
        }
        else if(guessed > number) {
            print: "Too high! \n";
        }
        else {
            print: "Too low! \n";
        }

        timeguessing++;
    }
}

def<int> main() {

    while(1) {
        game();
    }

    ret 0;
}
```

# Syntax Changes:
No more `cout << "Hello" << endl;`
Just `print: "Hello \n";`

No more `cin >> variable;`
Just `input: variable;`

No more `return`
Just `ret`

No more `void`
Just `def<null>`

No more `using namespace ...`
Just `namespace ...`

No more `#include <iostream>`
Just `using <iostream>`

No more `#define`
Just `define`

No more `struct`
Just `interface`

NEW FUNCTIONS
No `int test() {}`
Just `def<int> test() {}`
Avatible:
`def<int> test() {}`
`def<float> test() {}`
`def<double> test() {}`
`def<long> test() {}`
`def<long long> test() {}`
`def<null> test() {}`
`def<boolean> test() {}`


C+ is just C++ but a little bit different <br>
TO COMPILE G++ COMPILER IS REQUIRED!!!!!!!!!!
