#include <stdio.h>

int main(int argc, char *args[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = sizeof(arr) / sizeof(int) - 1;
    int N = 3;
    for (int k = 0; k < N; k++)
    {
        int temp = arr[i];
        for (int j = i; j >= 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}
