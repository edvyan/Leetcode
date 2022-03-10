#include <stdio.h>

int f[100][30];
int solution(char *S, int C[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int inf = 1000;
    int base = 'a' - 1; // 97-1=96
    for (int index = 0; index <= 26; index++)
    {
        f[0][index] = inf;
    }
    f[0][0] = 0;

    for (int i = 0; i < N; i++) // Loop over the length of array N
    {
        int val = S[i] - base; // Getting the corresponding integer of character
        int j = i + 1;         // j is the next to i check if there is the same number
        for (int index = 0; index <= 26; index++)
        {
            if (val != index)
            {
                f[j][index] = f[j - 1][index] + C[i];
            }
            else // If identical letter found
            {
                int min = inf;
                for (int k = 0; k <= 26; k++)
                {
                    if (val != k && f[j - 1][k] < min)
                    {
                        min = f[j - 1][k];
                    }
                    f[j][index] = min;
                }
            }
        }
    }

    int min = inf;
    for (int k = 0; k <= 26; k++)
    {
        if (f[N][k] < min)
        {
            min = f[N][k];
        }
    }
    return min;
}

int main()
{
    char *S = "aaaaa";
    int C[] = {1, 2, 3, 4, 5};
    int N = sizeof(C) / sizeof(int);
    int cost = solution(S, C, N);

    // int base = 'a' - 1;
    printf("%d", cost);
    return 0;
}