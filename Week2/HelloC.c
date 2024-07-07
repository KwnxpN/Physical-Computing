#include <stdio.h>

int main() {
    char student_id[9];
    char student_name[100];
    scanf("%[^\n]", student_id);
    scanf("\n%[^\n]", student_name);
    printf("Hello! My name is %s, %s", student_name, student_id);
    return 0;
}