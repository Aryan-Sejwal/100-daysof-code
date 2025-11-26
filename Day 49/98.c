//Q98: Print initials of a name with the surname displayed in full.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char words[100][100];
    int count = 0, i = 0, j = 0;

    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words[count][j] = '\0';
            count++;
            j = 0;
        } else {
            words[count][j++] = str[i];
        }
    }
    words[count][j] = '\0';
    count++;

    for (i = 0; i < count - 1; i++)
        printf("%c.", words[i][0]);

    printf("%s\n", words[count - 1]);
    return 0;
}

