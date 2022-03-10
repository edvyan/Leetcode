#include <stdio.h>

int main(int argc, char *args[])
{
    int n;
    int i = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    char binary[100];
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            binary[i] = 0;
        }
        else
        {
            binary[i] = 1;
        }
        n = n / 2;
        i++;
    }
    for (int k = 0; k < i; k++)
    {
        printf("%d ", binary[k]);
    }
    return 0;
}
