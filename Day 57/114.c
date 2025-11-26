//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() {
    char s[1001];
    scanf("%s",s);
    int max_len=0, start=0;
    int last[256];
    for(int i=0;i<256;i++) last[i]=-1;
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        if(last[s[i]]>=start) start=last[s[i]]+1;
        if(i-start+1>max_len) max_len=i-start+1;
        last[s[i]]=i;
    }
    printf("%d\n",max_len);
    return 0;
}
