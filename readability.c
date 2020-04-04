#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int wordCount = 1;
    int sentenceCount = 0;
    int letterCount = 0;

    float index;

    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        char temp = toupper(text[i]);
        if (temp >= 'A' && temp <= 'Z')
        {
            letterCount++;
        }
        else
        {
            if (temp == 32)
            {
                wordCount++;
            }
            else
            {
                if (temp == '.' || temp == '!' || temp == '?')
                {
                    sentenceCount++;
                }
            }
        }
    }

    index = 0.0588 * ((float) letterCount / (float) wordCount * 100) - 0.296 * ((float) sentenceCount / (float) wordCount * 100) - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        if ((int) round(index) >= 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", (int) round(index));
        }
    }
}