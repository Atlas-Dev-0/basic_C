#include <stdio.h>

// if..else

// 1 == "hooray!"
// 0 == "aawww!"

int main() {

    // int user_input;

    // printf("enter an integer 1 or 0: ");
    // scanf("%d", &user_input);

    // if (user_input == 1) {
    //         printf("hooray!");
    // } else if (user_input == 0) {
    //         printf("aaww!");
    // } else {
    //         printf("tanga!");
    // }

    int user_input;

    printf("enter an integer: ");
    scanf("%d", &user_input);

    if (user_input > 1 && user_input < 5) {
        printf("input is greater than 1 and less than five");
    } else if (user_input <= 1) {
        printf("bobo");
    } else {
        printf("gwapo si kenneth");
    }


    return 0;

}
