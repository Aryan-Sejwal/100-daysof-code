//Q92: Find the first repeating lowercase alphabet in a string.//
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};  
    char result = '\0';

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {  
                result = ch;
                break;
            }
        }
    }

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("No repeating character\n");

    return 0;
}
