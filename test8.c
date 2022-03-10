#include <stdio.h>
#include <string.h>

#define LEN 20
#define NUM 9

void iTb(int N, char *arr, size_t len)
{
    int pos = len - 1;
    while (N > 0)
    {
        arr[pos] = N % 2;
        N /= 2;
        pos--;
    }
}

int main(int argc, char *args[])
{
    char arr[LEN] = {0};
    iTb(NUM, arr, LEN);
    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("%s", arr);
    return 0;
}
