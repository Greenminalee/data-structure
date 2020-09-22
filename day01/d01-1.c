#include <stdio.h>
int check[2] = {0,};
int fibonacci(int n)
{
    if (n == 0)
    {
        check[0]++;
        return 0;
    }
    else if (n == 1)
    {
        check[1]++;
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int t = 0;
    int n = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        check[0] = 0;
        check[1] = 0;
        scanf("%d", &n);
        fibonacci(n);
        printf("%d %d\n", check[0], check[1]);
    }
    return 0;
}