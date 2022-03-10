#include <stdio.h>
#include <stdlib.h>

int lis(int arr[], int n)
{
    int *lis, max = 0;
    lis = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        lis[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max < lis[i])
        {
            max = lis[i];
        }
    }
    free(lis);
    return max;
}
int main(int argc, char *args[])
{
    int arr[] = {2, 6, 266, 27, 91, 83};
    int len = sizeof(arr) / sizeof(int);
    int max = lis(arr, len);
    printf("%d\n", max);

    return 0;
}
