//Q83: Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        
        // Convert to lowercase for easier comparison
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
        // Check if it's an alphabetic character
        if ((ch >= 'a' && ch <= 'z')) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    
    printf("String: %s", str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Total alphabetic characters: %d\n", vowels + consonants);
    
    return 0;
}