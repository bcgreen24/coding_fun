#include <stdio.h>
#define MAXLINE 512

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int currline = 0;

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    int longlinenum = 0;

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0 )
    {
        if (len > max)
        {
            max = len;
            longlinenum = currline;
            copy(line, longest);
        }
    }
    if (max > 0)
    {
        printf ( "The longest line is: %s at line number %d\n", longest, longlinenum );
    }
}

int get_line ( char line[], int maxline )
{
    char c;
    int i = 0;

    while ((c = getchar()) != EOF && c != '\n' && i < (MAXLINE - 1))
    {
        line[i] = c;
        ++i;
        if (c == '\n')
        {
            line[i] = '\0';
            
        }
    }
    ++currline;
    return i;
}

void copy(char from[], char to[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}