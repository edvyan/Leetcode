#include <stdio.h>

int solution(int *arr, int N)
{
    int value = 0;
    for (int i = 0; i < N; i++)
    {
        value += arr[i];
    }
    return value;
}
int main(int argc, char *args[])
{
    int arr[] = {1, 2, 3};
    int LEN = sizeof(arr) / sizeof(int);
    int val = solution(arr, LEN);
    printf("%d", val);

    return 0;
}
