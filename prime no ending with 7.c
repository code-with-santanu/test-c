#include <stdio.h>
#include <math.h>

//finding no of divisor of a no
int isPrime(int n)
{
    int i, count = 0;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    return count;
}

//first checking the unit place digit is 7 or not, then checking it is prime or not
int main()
{
    int n;
    for (n = 7; n <= 500; n++)
    {
        if (n % 10 == 7)
        {
            if (isPrime(n) == 1)
            {
                printf("%d\t", n);
            }
        }
    }

    return 0;
}