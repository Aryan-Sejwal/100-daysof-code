//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Original string: %s", str);
    
    // Convert to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
        i++;
    }
    
    printf("Uppercase string: %s", str);
    
    // Show ASCII difference
    printf("\nNote: ASCII difference between lowercase and uppercase is 32\n");
    printf("Example: 'a' (97) - 32 = 'A' (65)\n");
    
    return 0;
}