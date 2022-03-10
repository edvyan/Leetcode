#include <stdio.h>

#define SIZE 8

int solution(int *arr, int N)
{
    int LIS[N];
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        LIS[i] = 1;
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && LIS[i] < LIS[j] + 1)
            {
                LIS[i] = LIS[j] + 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (max < LIS[i])
        {
            max = LIS[i];
        }
    }
    return max;
}

int main(int argc, char *args[])
{
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int LEN = sizeof(arr) / sizeof(int);
    int ans = solution(arr, LEN);
    printf("%d", ans);
    return 0;
}
