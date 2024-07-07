#include <stdio.h>

int main() {
    float myScore = 75.20;
    char* myGrade;
    if (myScore >= 80) {
        myGrade = "A";
    } else if (75 <= myScore < 80) {
        myGrade = "B+";
    } else if (70 <= myScore < 75) {
        myGrade = "B";
    } else if (65 <= myScore < 70) {
        myGrade = "C+";
    } else if (60 <= myScore < 65) {
        myGrade = "C";
    } else if (55 <= myScore < 60) {
        myGrade = "D+";
    } else if (50 <= myScore < 55) {
        myGrade = "D";
    } else {
        myGrade = "F";
    }

    printf("I got %.2f points and My Grade is %s", myScore, myGrade);
    return 0;
}