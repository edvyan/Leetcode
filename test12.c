#include <stdio.h>
#define LEN 5
int solution(int A[], int N)
{
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (A[j] < A[i])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    int i, j;
    for (i = 0, j = 1; i < (N - 1) && j < N; i++, j++)
    {
        if (A[j] - A[i] > 1)
        {
            k = A[j] - 1;
        }
    }
    return k;
}

int main(int argc, char *args[])
{
    int A[LEN] = {
        2,
        5,
        3,
        6,
        1,
    };

    int k = solution(A, LEN);
    printf("%d\n", k);
    return 0;
}
