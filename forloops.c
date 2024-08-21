#include <stdio.h> // Include the standard input-output library

int main() {
    
    int user_input; // Declare an integer variable to store user input

    printf("enter an integer: "); // Prompt the user to enter an integer
    scanf("%d", &user_input); // Read the integer input from the user and store it in user_input

    if (user_input == 1) { // Check if the user_input is equal to 1
        // If user_input is 1, run this block of code
        for (int i = 0; i <= 30; i++) { // Loop from 0 to 30
            printf("kenneth %d \n", i); // Print "kenneth" followed by the current loop number
        }
    } else { // If user_input is not 1, run this block of code
        printf("kenneth"); // Print "kenneth"
    }

    return 0; // End the program
}
