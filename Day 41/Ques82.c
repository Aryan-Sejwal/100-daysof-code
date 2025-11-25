//Q82: Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("\nEach character on a new line:\n");
    printf("Position | Character\n");
    printf("---------|----------\n");
    
    while (str[i] != '\0' && str[i] != '\n') {
        printf("   %2d    |    '%c'\n", i, str[i]);
        i++;
    }
    
    printf("\nTotal characters: %d\n", i);
    
    return 0;
}