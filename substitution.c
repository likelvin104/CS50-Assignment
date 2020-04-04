#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

const int keyLen = 26;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(argv[1]) != keyLen)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    
    
    for (int i = 0; i < keyLen; i++)
    {
        if (tolower(argv[1][i]) < 'a' || tolower(argv[1][i]) > 'z')
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }

        for (int j = 0; j < keyLen; j++)
        {
            if (tolower(argv[1][i]) == tolower(argv[1][j]) && i != j)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
    }




    string plain = get_string("plaintext: ");
    for (int i = 0; i < strlen(plain); i++)
    {
        if (plain[i] >= 'A' && plain[i] <= 'Z')
        {
            plain[i] = toupper(argv[1][plain[i] - 65]);
        }
        else
        {
            if (plain[i] >= 'a' && plain[i] <= 'z')
            {
                plain[i] = tolower(argv[1][plain[i] - 97]);
            }
        }
    }

    printf("ciphertext: %s\n", plain);
}