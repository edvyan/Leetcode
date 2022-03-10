#include <stdio.h>

int jump(int n)
{
    // n=0、1、2的时候,直接返回n即可
    if (n < 3)
    {
        return n;
    }

    //第一个数为1
    int one = 1;

    //第二个数为2
    int two = 2;

    //用于存放前两个数之和
    int sum = 0;
    while (n > 2)
    {
        sum = one + two;
        one = two;
        two = sum;

        n--;
    }
    return sum;
}
int main(int argc, char *args[])
{
    int num = jump(2);
    printf("%d", num);
    return 0;
}
