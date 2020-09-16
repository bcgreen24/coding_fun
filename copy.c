#include <stdio.h>

void copy(char line[]);

int main(void)
{
    char line[] = "Hello, world!";

    printf("%s\n", line);
    copy(line);

    printf("%s\n", line);
    return 0;

}

void copy(char line[])
{
    for (int i = 0; i < 13; i++)
    {
        line[i] = '*';
    }

    return;
}