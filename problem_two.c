#include <stdio.h>


// surname: {sname}
// age: {age}


int main() {
   
   char sname [10];
   int age;

   printf("Enter surname:");
   scanf("%s", sname);
   printf("Enter age:");
   scanf("%d",&age);
   printf("Surname: %s, Age: %d\n", sname, age);

    return 0;
}
