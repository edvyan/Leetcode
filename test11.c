#include <stdio.h>

// int solution(int A[], int N)
// {
//     int ret = 0;

//     for (int i = 0; i < N; ++i)
//     {
//         ret = ret ^ A[i];
//     }

//     return ret;
// }

int main(int argc, char *args[])
{
    int ret = 0;
    int arr[3] = {2, 3, 2};
    for (int i = 0; i < 3; ++i)
    {
        ret = ret ^ arr[i];
        printf("%d\n", ret);
    }

    return 0;
}
