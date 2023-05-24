#include <stdio.h>
#include <string.h>

int main(void) {
    printf("\n==================================\n");
    printf("If else tutorial\n");
    char firstName[10] = "Henrik"; //assignment, assigning the value
    // firstName == "Henrik" -> strcmp(firstName, "Henrik") == 0
    if (strcmp(firstName, "Henrik") == 0) { //condition, checking the condition
        printf("Your first name is Henrik\n");
    } else if (strcmp(firstName, "M") == 0) {
        printf("Your first name is M\n");
    } else {
        printf("Your first name is not Henrik or M\n");
    }
    
    printf("\n==================================\n\n");
    return 0;
}