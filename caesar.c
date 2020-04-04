#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (argv[1][i] < '0' || argv[1][i] > '9')
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    
    int key = atoi(argv[1]);
    
    string plain = get_string("plaintext:  ");
    for (int i = 0; i < strlen(plain); i++)
    {
        if (plain[i] >= 'a' && plain[i] <= 'z')
        {
            plain[i] = (plain[i] - 97 + key) % 26 + 97;
        }
        else
        {
            if (plain[i] >= 'A' && plain[i] <= 'Z')
            {
                plain[i] = (plain[i] - 65 + key) % 26 + 65;
            }
        }
    }
    
    printf("ciphertext: %s\n", plain);
    
}