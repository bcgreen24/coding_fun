#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 15

int main(void)
{
    int cc, wc, state;
    cc = wc = 0;
    char c;
    state = OUT;
    int freqs[MAX_WORD_LENGTH];

    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        freqs[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            ++cc;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            freqs[cc] += 1;
            cc = 0;

        } else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
    }

    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        printf("%d: ", i);
        for(int j = 0; j < freqs[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Total word count: %d\n", wc);
}