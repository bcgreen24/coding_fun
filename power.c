#include <stdio.h>

int power(int b, int e);

int main(void)
{
    for (int i = 0; i < 21; i++)
    {
        printf("2^%d is %d\n", i, power(2, i));
    }
}

int power(int b, int e)
{
    int p = 1;

    for(int i = 0; i < e; i++)
    {
        p = p * b;
    }

    return p;
}