#include <stdio.h>

int solution(int *arr, int N)
{
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main(int argc, char *args[])
{
    int arr[] = {21, 35, 69, 9, 22, 4234, 73, 7, 37, 54849, 9679, 769, 2342, 849, 839};
    int max = solution(arr, sizeof(arr) / sizeof(int));
    printf("%d", max);
    return 0;
}
