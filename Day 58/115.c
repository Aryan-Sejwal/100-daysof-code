//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
int main() {
    char s[1001], t[1001];
    scanf("%s%s", s, t);
    int cnt[26]={0};
    if(strlen(s)!=strlen(t)) { printf("Not Anagram"); return 0; }
    for(int i=0; s[i]; i++) cnt[s[i]-'a']++;
    for(int i=0; t[i]; i++) cnt[t[i]-'a']--;
    for(int i=0; i<26; i++)
        if(cnt[i]) { printf("Not Anagram"); return 0; }
    printf("Anagram");
    return 0;
}
