
int f[100005][30];
int solution(char *S, int C[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int inf = 1000000007;
    int base = 'a' - 1;
    for (int index = 0; index <= 26; index++)
    {
        f[0][index] = inf;
    }
    f[0][0] = 0;
    for (int i = 0; i < N; i++)
    {
        int val = S[i] - base;
        int j = i + 1;
        for (int index = 0; index <= 26; index++)
        {
            if (val != index)
            {
                f[j][index] = f[j - 1][index] + C[i];
            }
            else
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
