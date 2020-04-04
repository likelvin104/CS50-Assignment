#include <cs50.h>
#include <stdio.h>

int get_height(void);
void create_pyramid(int);

int main(void)
{
    create_pyramid(get_height());
}


void create_pyramid(int height)
{
    for (int n = 1; n <= height; n ++)
    {
        for (int j = 0; j < height - n; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l < n; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}
