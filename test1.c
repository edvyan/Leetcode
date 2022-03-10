#include <stdio.h>
int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int s1 = 0, s2 = 0;
    int x = 0, i = 0; // initialize x to 0

    while (i < N)
    {
        if (A[i] == x)
        {
            s1 = s1 + 1;
        }
        else
        {
            s2 = s2 + 1;
        }
        i = i + 1;
        x = 1 - x; // alternating 1 and 0
    }
    return (s1 < s2) ? s1 : s2;
}

int main(int argc, char *args[])
{
    int arr[] = {0, 1, 0};

    int m = solution(arr, sizeof(arr) / sizeof(int));
    printf("%d", m);

    return 0;
}