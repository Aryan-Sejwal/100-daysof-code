//Q97: Print the initials of a name.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int start = 0, end = 0;

    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    len = strlen(str);

    while (end <= len) {
        if (str[end] == ' ' || str[end] == '\0') {
            for (int i = start, j = end - 1; i < j; i++, j--) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            start = end + 1;
        }
        end++;
    }

    printf("%s\n", str);
    return 0;
}
