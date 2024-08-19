#include <stdio.h>

int Fibo(int n)
{
    int prev1 = 1;
    int prev2 = 0;
    int num = 0;

    for (int i = 1; i <= n; i++) {
            num = prev1 + prev2;
            prev2 = prev1;
            prev1 = num;
    }
    return num;
}

int main()
{

    int n;
    scanf("%d", &n);
    printf("method = %d", Fibo(n));
    return 0;
}