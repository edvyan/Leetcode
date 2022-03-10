#include <stdio.h>

long int f[1000] = {0};

int solution(int n)
{
    if (n <= 2)
    {
        return n;
    }

    return solution(n - 1) + solution(n - 2);
}
int main(int argc, char *args[])
{
    int num = solution(5);
    printf("%d", num);
    return 0;
}
