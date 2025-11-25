//Q90: Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Original string: %s", str);
    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Lowercase to uppercase
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Uppercase to lowercase
            str[i] = str[i] + 32;
        }
        i++;
    }
    
    printf("Toggled string: %s", str);
    
    return 0;
}