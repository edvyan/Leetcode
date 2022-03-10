#include <stdio.h>

int solution(int *arr, int N, int NUM)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == NUM)
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char *args[])
{

    int arr[] = {12, 54, 12, 58, 8464, 121, 69846, 88, 1251, 12, 58};
    int len = sizeof(arr) / sizeof(int);
    int NUM = 12;
    int ans = solution(arr, len, NUM);
    printf("%d\n", ans);
    return 0;
}
