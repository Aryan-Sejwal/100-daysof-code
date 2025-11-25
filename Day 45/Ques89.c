//Q89: Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[100], target;
    int count = 0, i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to count: ");
    scanf("%c", &target);
    
    printf("String: %s", str);
    printf("Character to find: '%c'\n", target);
    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }
    
    printf("Character '%c' appears %d times in the string\n", target, count);
    
    return 0;
}