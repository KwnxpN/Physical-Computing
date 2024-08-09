#include <stdio.h>
#include <string.h>

char* IsPalindrome(char *text)
{
    int end = strlen(text) - 1;
    int start = 0;
    while (start != end) {
        if (text[start] != text[end]) {
            return "It is not Palindrome.";
        }
        start++;
        end--;
    }
    return "It is Palindrome.";
}

int main()
{
    char text[101];
    scanf("%[^\n]", text);
    printf("%s", IsPalindrome(text));
    return 0;
}