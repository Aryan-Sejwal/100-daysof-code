//Q85: Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Find length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    printf("Original string: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}