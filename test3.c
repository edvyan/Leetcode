#include <stdio.h>

// f[i][k], f is the minimum cost; i is the i-th place in the string; k is the possible letter one of the 26.

int f[100005][30]; // Declare an array large enough to hold all the possibilities
int solution(char *S, int C[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int inf = 1000000007;                     // Declare a big enough upper bound
    int base = 'a' - 1;                       // 97-1=96
    for (int index = 0; index <= 26; index++) // To initilize the array, optional, but as a routine
    {
        f[0][index] = inf;
    }
    f[0][0] = 0;

    for (int i = 0; i < N; i++) // Loop over the length of array N
    {
        int val = S[i] - base;                    // Getting the corresponding integer of character
        int j = i + 1;                            // j is the next to i check if there is the same number
        for (int index = 0; index <= 26; index++) // Loop over all the possibilities of the previous letter
        {
            if (val != index) // If the letter is not the same as the letter in array
            {
                f[j][index] = f[j - 1][index] + C[i]; // Record the cost for different letters in previous states
            }
            if (val == index)
            {
                int min = inf;
                for (int k = 0; k <= 26; k++) // Compare the cost of neighboring letters
                {
                    if (val != k && f[j - 1][k] < min) // If the previous cost is smaller, take the minimum
                    {
                        min = f[j - 1][k];
                    }
                    else // If the current cost is smaller, take it as the minimum
                    {
                        f[j][index] = min;
                    }
                }
            }
        }
    }

    int min = inf;
    for (int k = 0; k <= 26; k++) // Loop to find the minimum
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
    // char *S = "aaaaa";
    // int C[] = {1, 2, 3, 4, 5};
    char *S = "aaab";
    int C[] = {2, 3, 2, 1};
    int N = sizeof(C) / sizeof(int);
    int cost = solution(S, C, N);

    // int base = 'a' - 1;
    printf("%d", cost);
    return 0;
}