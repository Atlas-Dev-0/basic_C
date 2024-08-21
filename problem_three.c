#include <stdio.h>

// Write a C program that classifies the temperature into different categories. The program should handle the following categories:

//     If the temperature is less than 0°C, print "Freezing cold."
//     If the temperature is between 0°C and 15°C (inclusive), print "Cold."
//     If the temperature is between 16°C and 25°C (inclusive), print "Mild."
//     If the temperature is between 26°C and 35°C (inclusive), print "Warm."
//     If the temperature is above 35°C, print "Hot."

int main(){

int user_input;

printf("Temperature: ");
scanf("%d" , &user_input);

if (user_input < 0){
        printf("Freezing Cold.");

}else if (user_input >=0 && user_input <=15){
        printf("Cold.");

}else if (user_input >=16  && user_input <= 25){ 
        printf("Milf.");

} else if (user_input >=26  && user_input <= 35){
        printf("WARM.");

} else if ( user_input >35){
        printf("bat ka lumabas?");
}
return 0;
}