#include <stdio.h>

//make a program that asks for the user's name and print it out
// output: 
//              What is your name? {name}
//              Hello {name}


int main() {

    char name [50];

    printf("Enter name: ");
    scanf ("%s", name);
    printf("Hello, %s!\n", name);

    return 0;
}
