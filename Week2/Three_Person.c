#include <stdio.h>

int main()
{
    char fname1[256];
    char sname1[256];
    char person2[256];
    char person3[256];

    scanf("%s %s", fname1, sname1);
    scanf("\n%[^\n]", person2);
    scanf("\n%[^\n]", person3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s", person3);

    return 0;
}