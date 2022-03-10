#include <stdio.h>

int solution(int *arr, int N, int a, int b)
{
    int previous = 0;
    int min = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == a || arr[i] == b)
        {
            if (arr[i] != arr[previous])
            {

                min = i - previous;
            }
            previous = i;
        }
    }
    return min;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 6, 8, 6, 6, 6, 2};
    int len = sizeof(arr) / sizeof(int);
    int a = 2, b = 8;
    int min = solution(arr, len, a, b);

    printf("%d\n", min);
    return 0;
}