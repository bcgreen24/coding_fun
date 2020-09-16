#include <stdlib.h>
#include <stdio.h>

void change_string(char **str);


int main(void)
{
    char *str;
    str = (char *) malloc(100);

    if ( str == NULL )
    {
        printf("Could not allocate memory!");
        return 1;
    }
    printf("Memory allocated!\n");
    printf("Memory location of str: %x\n", &str);

    str = "Hello";
    puts(str);
    change_string(&str);
    puts(str);
    free(str);

    return 0;
}

void change_string(char **str)
{
    *str = "Goodbye";
    return;
}