//Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int is_palindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Find length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    printf("String: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome == 1) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    
    return 0;
}