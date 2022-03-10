#include <stdio.h>

#define NIL -1
#define MAX 100

int lookup[MAX];

void initialization()
{
    for (int i = 0; i < MAX; i++)
    {
        lookup[i] = NIL;
    }
}

int fib(int n)
{
    if (lookup[n] == NIL)
    {
        if (n <= 1)
        {
            lookup[n] = n;
        }
        else
        {
            lookup[n] = fib(n - 1) + fib(n - 2);
        }
    }
    return lookup[n];
}

int main()
{
    initialization();
    int ans = fib(5);
    printf("%d ", ans);
    return 0;
}