#include <stdio.h>
int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)

    int ans = 0; // Number of places which have the same situation in both sides.
    for (int i = 0; i < N; i++)
    {
        int j = i + 1; // Index of the next number
        while (j < N && A[j] == A[i])
        {
            j++;
        }
        if (i == 0 || j == N)
        {
            ans++;
        }
        else if (A[i - 1] > A[i] && A[j] > A[i])
        {
            ans++;
        }
        else if (A[i - 1] < A[i] && A[j] < A[i])
        {
            ans++;
        }
        i = j - 1; // skip identical numbers in a row
    }
    return ans;
}
int main()
{
    int arr[] = {2, 2, 3, 4, 3, 3, 2, 2, 1, 1, 2, 5};
    int LEN = sizeof(arr) / sizeof(int);
    int num = solution(arr, LEN);
    printf("%d", num);
    return 0;
}