//Q94: Find the longest word in a sentence.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char word[100], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = j;
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    len = j;
    if (len > maxLen) {
        strcpy(longest, word);
    }

    printf("%s\n", longest);

    return 0;
}
