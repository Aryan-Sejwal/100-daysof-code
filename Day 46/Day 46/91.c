//Q91: Remove all vowels from a string.//
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], result[1000];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }

    result[j] = '\0'; 
    printf("%s\n", result);

    return 0;
}
