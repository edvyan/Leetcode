#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    char array[30];
    printf("Please enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        array[i] = n % 2;
        i++;
        n /= 2;
        printf("%d ", n);
    }
    printf("\ni = %d\n", i);
    for (int k = 0; k < i; k++)
    {
        printf("%d ", array[k]);
    }
    printf("\n");
    for (int j = 0; j < i / 2; j++)
    {
        char temp = array[i - j - 1];
        array[i - j - 1] = array[j];
        array[j] = temp;
    }
    for (int k = 0; k < i; k++)
    {
        printf("%d ", array[k]);
    }
    int m = 0;
    for (m = 0; m < i; m++)
    {
        if (array[m])
    }
    return 0;
}