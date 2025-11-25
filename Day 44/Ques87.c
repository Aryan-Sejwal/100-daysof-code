//Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0, alphabets = 0, i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("String: %s", str);
    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        else {
            special++;
        }
        i++;
    }
    
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    printf("Alphabets: %d\n", alphabets);
    
    return 0;
}