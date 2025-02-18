#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[25]; // Bytes

    printf("What is your name\n ");
    
    fgets(name, 25, stdin); // READ WHITESPACES IN THE NAME.
    //name[strlen(name)-1] = '\0'; // Removes last backlash from string

    printf("Hello %s ", name);

    printf("What is your age: \n");
    scanf("%d" , &age);

    printf("You will be DEAD in: %d Years \n", 100-age);

    return 0;
}