#include <stdio.h>

int main(void)
{
    int c;
    printf("EOF: %d\n", EOF);
    while((c = getchar()) != '\n')
    {
        if(c == '\t')
        {
            putchar('-');
        }else
        {
            putchar(c);
        }
        
        
    }
}