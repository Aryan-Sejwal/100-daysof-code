//Q145: Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}
