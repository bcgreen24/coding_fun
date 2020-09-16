#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 25

int main(void)
{
    int cc, wc, state, longest_length, old_longest_length, lc;
    cc = wc = lc = longest_length = old_longest_length = 0;
    char c;
    state = OUT;
    int freqs[MAX_WORD_LENGTH];
    char longest_word[MAX_WORD_LENGTH];
    char old_longest_word[MAX_WORD_LENGTH];

    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        freqs[i] = 0;
        longest_word[i] = '0';
        old_longest_word[i] = '0';
    }

    while ((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            lc++;
        }
        if (c != ' ' && c != '\n' && c != '\t' && c != ',' && c != '-' && c != '.' && c != '!' && c != '?')
        {
            if(cc < MAX_WORD_LENGTH)
            {
                old_longest_word[cc] = c;
                ++cc;
            }
            
        }
        if (c == ' ' || c == '\n' || c == '\t' || c == ',' || c == '-' || c == ';' || c == '.' || c == '!' || c == '?')
        {
            state = OUT;
            if(cc < MAX_WORD_LENGTH)
            {
                freqs[cc] += 1; 
            }
            
            if(cc >= longest_length && cc < MAX_WORD_LENGTH)
            {
                longest_length = cc;
                for(int i = 0; i < MAX_WORD_LENGTH; i++)
                {
                    longest_word[i] = old_longest_word[i];
                }
                
            }
            
            cc = 0;

        } else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
    }

    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        printf("%d-letter words: %d\n", i, freqs[i]);
    }

    printf("Total word count: %d\n", wc);
    printf("Line count: %d\n", lc);
    printf("Example of longest word: ");
    for(int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        if(longest_word[i] != '0')
        {
            printf("%c", longest_word[i]);
        }
        
    }
    printf("\n");
}