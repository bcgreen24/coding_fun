#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{

    // Return an error if there is no argument, too many arguments, or if the argument is too large
    if (argc < 2)
    {
        printf("No argument! Please enter cipher key\n.");
        return 1;
    }
    else if (argc > 2)
    {
        printf("Too many arguments! Please enter a single cipher key.\n");
        return 1;
    }
    else if (strlen(argv[1]) > 26 || strlen(argv[1]) < 26)
    {
        printf("Argument too long! Please enter a 26-character cipher key\n");
        return 1;
    }


    // Get our cipher key from the single argument to the program
    char *cipher = argv[1];
    for (int i = 0; i < strlen(cipher); i++)
    {
        if (!isalpha(cipher[i]))
        {
            printf("Invalid characters in cipher key argument!\n");
            return 1;
        }
    }


    int dup_count = 0;
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 26; j++)
        {
            if (cipher[i] == cipher[j])
            {
                dup_count += 1;
                if (dup_count > 1)
                {
                    printf("Duplicate characters found in cipher key!\n");
                    return 1;
                }
            }
        }
        dup_count = 0;
    }

    const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    printf("plaintext:");
    char* text;
    scanf("%s", text);
    const int text_len = strlen(text);
    char* coded_text = new char[text_len];
    int i;
    int j;


    // Loop through the submitted plaintext, looking for characters that match the 'alphabet' array
    // If a match is found, use the character with the same index in the 'cipher' array.
    // If there are no matches to a lower case or upper case letter, copy the character to the 'ciphered' array
    for (i = 0; i < text_len; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (text[i] == alphabet[j])
            {
                coded_text[i] = tolower(cipher[j]);
                break;
            }
            else if (text[i] == toupper(alphabet[j]))
            {
                coded_text[i] = toupper(cipher[j]);
                break;
            }
            else
            {
                coded_text[i] = text[i];
            }
        }
    }
    //coded_text[text_len] = '\0';
    printf("ciphertext: %c\n", coded_text);
    return 0;
}
