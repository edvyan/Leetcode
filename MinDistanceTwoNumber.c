#include <stdio.h>
#include <stdlib.h>
int solution(int *arr, int N, int a, int b)
{
    int min = __INT32_MAX__;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if ((a == arr[i] && arr[j] == b || arr[i] == b && a == arr[j]) && min > abs(i - j))
            {
                min = abs(i - j);
            }
        }
    }
    if (min > N)
    {
        return -1;
    }
    return min;
}
int main(int argc, char *args[])
{
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int y = 6;

    printf("Minimum distance between %d and %d is %d\n", x,
           y, solution(arr, n, x, y));
    return 0;
}
