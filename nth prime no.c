#include <stdio.h>
#include <math.h>

//finding no of divisor of a no...
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

//finding the nth prime no...
int main()
{
    int i = 2, n, c = 0;
    printf("\nEnter the value of n:");
    scanf("%d", &n);
    while (c < n)
    {
        if (isPrime(i) == 1)
        {
            c++;
        }
        i++;
    }
    i = i - 1;
    printf("%d", i);

    return 0;
}
