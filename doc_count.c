#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int wc, cc, lc, state;
    wc = cc = lc = 0;
    char c;
    state = OUT;

    while((c = getchar()) != EOF)
    {
        if(c != '\n')
        {
            ++cc;
        }
        
        if(c == '\n')
        {
            ++lc;
        }
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
    }

    printf("\nCharacter count: %i - Line count: %i - Word count: %i\n", cc, lc, wc);
}