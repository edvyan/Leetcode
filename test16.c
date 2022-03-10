#include <stdio.h>

int solution(int *arr, int N)
{
    int count = 0, count1 = 0;
    int arr1[N];
    int arr2[N];
    for (int i = 0; i < N; i++)
    {
        arr1[i] = (i % 2 == 0) ? 1 : 0;
        arr2[i] = (i % 2 == 0) ? 0 : 1;
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] ^ arr1[i] == 1)
        {
            count++;
        }
        if (arr[i] ^ arr1[i] == 1)
        {
            count1++;
        }
    }
    return count1 > count ? count : count1;
}

int main(int argc, char *args[])
{
    int arr[] = {0, 1, 0};
    int m = solution(arr, sizeof(arr) / sizeof(int));
    printf("%d", m);

    return 0;
}
