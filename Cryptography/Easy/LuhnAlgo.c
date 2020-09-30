#include <stdio.h>

int sumOfDigits(int);

int main(void)
{
    //Note, impliment the get_long function separately and include the library.
    long long int n;
    n = get_long("Number: ");
    long long int temp = n;
    int tempLast = 0, tempSLast, sumOfInto2 = 0;
    while (temp)
    {
        if (temp < 10)
        {
            tempLast += temp % 10;
            temp /= 10;
            break;
        }
        tempLast += temp % 10;
        temp /= 10;
        tempSLast = temp % 10;
        tempSLast *= 2;
        sumOfInto2 += sumOfDigits(tempSLast);
        temp /= 10;
        continue;
    }
    int sum1 = tempLast + sumOfInto2;
    if (sum1 % 10 == 0)
    {
        // printf("VALID\n");
        if (n > 999999999999999)
        {
            // printf("here\n");
            if (n / 1000000000000000 == 4)
            {
                printf("VISA\n");
                return 0;
            }
            else if (n / 100000000000000 == 51 || n / 100000000000000 == 52 ||
            n / 100000000000000 == 53 || n / 100000000000000 == 54 ||
            n / 100000000000000 == 55)
            {
                printf("MASTERCARD\n");
                return 0;
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (n > 99999999999999)
        {
            if (n / 10000000000000 == 34 || n / 10000000000000 == 37)
            {
                printf("AMEX\n");
                return 0;
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (n > 999999999999)
        {
            if (n / 1000000000000 == 4)
            {
                printf("VISA\n");
                return 0;
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

int sumOfDigits(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
