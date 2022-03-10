#include <stdio.h>

void solution(int *arr, int N)
{
    for (int i = 0; i < N / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = temp;
    }
}
int main(int argc, char *args[])
{
    int arr[] = {1, 2};
    int len = sizeof(arr) / sizeof(int);
    solution(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
