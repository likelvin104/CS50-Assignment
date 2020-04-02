#include <stdio.h>
#include <cs50.h>

bool is_Valid(long number);
long get_number();
int get_Digit(int digit, long number);
string card_type(long number);

int main(void)
{
    long number = get_long("Number: ");
    if (is_Valid(number))
    {
        printf("%s\n", card_type(number));
    }
    else
    {
        printf("INVALID\n");
    }
}


string card_type(long number)
{
    int i = 0;
    int start_num;
    long digit = 1;
    int ten = 0;
    int one = 0;
    while (number / digit >= 1)
    {
        one = ten;
        ten = (number % (digit * 10) - number % digit) / digit;
        i++;
        digit *= 10;
    }
    start_num = ten * 10 + one;
    if (i == 15)
    {
        if (start_num == 34 || start_num == 37)
        {
            return "AMEX";
        }
        else
        {
            return "INVALID";
        }
    }
    else if (i == 16)
    {
        if (start_num == 51 || start_num == 52 || start_num == 53 || start_num == 54 || start_num == 55)
        {
            return "MASTERCARD";
        }
        else if ((start_num - start_num % 10) / 10 == 4)
        {
            return "VISA";
        }
        else
        {
            return "INVALID";
        }
    }
    else if (i == 13)
    {
        if ((start_num - start_num % 10) / 10 == 4)
        {
            return "VISA";
        }
        else
        {
            return "INVALID";
        }
    }
    else
    {
        return "INVALID";
    }
}


bool is_Valid(long number)
{
    int sum = 0;
    long digit = 1;
    int temp;
    for (int i = 1; (number / digit >= 1) ; i++)
    {
        if (i % 2 == 0)
        {
            temp = get_Digit(i, number) * 2;
            if (temp >= 10)
            {
                sum += (temp % 10) + ((temp - (temp % 10)) / 10);
            }
            else
            {
                sum += temp;
            }
        }
        else
        {
            sum += get_Digit(i, number);
        }
        digit *= 10;
    }
    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int get_Digit(int digit, long number)
{
    long p = 1;
    for (int i = 0; i < digit; i++)
    {
        p *= 10;
    }
    long ans = ((number % p) - (number % (p / 10))) / (p / 10);
    return ans;
}
