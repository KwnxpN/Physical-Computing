#include <stdio.h>

int main()
{
    char firstName[31];
    char lastName[31];
    int id;
    int day, month, year;
    float gpa;

    scanf("%s %s", firstName, lastName);
    scanf("%d", &id);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", firstName, lastName);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%02d\n", day, month, year);
    printf("GPA: %.2f", gpa);

    return 0;
}