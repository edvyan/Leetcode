#include <stdio.h>

long int f[1000] = {0};
int jump(int n)
{
    //当只有一阶台阶的时候，只有一种上台阶的方式。

    //当有2阶台阶的时候，有2种上台阶的方式，一种是一次上一阶，还有一种是一次上2个台阶。

    //现在设有n阶台阶,如果n>2,那种应该有（先跳一阶）+（先跳2阶）的方式

    //如果先跳一阶，那么就有jump(n-1)中方式。如果先跳2阶，那么就有jump(n-2)中方式。

    //因此可以知道共有jump(n-1) + jump(n-2)种方式。
    if (n == 1)
    {
        f[1] = 1;
        return f[1];
    }

    if (n == 0)
    {
        f[0] = 1;
        return f[0];
    }

    if (n == 2)
    {
        f[2] = 2;
        return f[2];
    }
    else
    {
        if (f[n - 1] != 0)
        {
            if (f[n - 2] != 0)
            {
                return (f[n - 1] + f[n - 2]);
            }
            else
            {
                f[n - 2] = jump(n - 2);
                return (f[n - 1] + f[n - 2]);
            }
        }
        else
        {
            if (f[n - 2] != 0)
            {
                f[n - 1] = jump(n - 1);
                return (f[n - 1] + f[n - 2]);
            }
            else
            {
                f[n - 1] = jump(n - 1);
                f[n - 2] = jump(n - 2);
                return (f[n - 1] + f[n - 2]);
            }
        }
    }
}
int main(int argc, char *args[])
{
    int num = jump(5);
    printf("%d", num);
    return 0;
}
