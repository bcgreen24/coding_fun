#include <stdio.h>

int main()
{
    printf("The size of an int is:                 %lu bytes.\n", sizeof(int));
    printf("The size of a long is:                 %lu bytes.\n", sizeof(long));
    printf("The size of a long long is:            %lu bytes.\n", sizeof(long long));
    printf("The size of a short is:                %lu bytes.\n", sizeof(short));
    printf("The size of a char is:                 %lu bytes.\n", sizeof(char));
    printf("The size of an unsigned int is:        %lu bytes.\n", sizeof(unsigned int));
    printf("The size of a unsigned short is:       %lu bytes.\n", sizeof(unsigned short));
    printf("The size of a unsigned long is:        %lu bytes.\n", sizeof(unsigned long));
    printf("The size of a unsigned long long is:   %lu bytes.\n", sizeof(unsigned long long));
    printf("The size of a double is:               %lu bytes.\n", sizeof(double));
    printf("The size of a float is:                %lu bytes.\n", sizeof(float));
}