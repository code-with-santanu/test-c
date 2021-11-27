#include <stdio.h>
#include <math.h>

//finding no of divisor of a no
int isPrime(int no)
{
    int i, count = 0;
    for (i = 1; i <= sqrt(no); i++)
    {
        if (no % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, no;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("\nThe prime nos are: ");

    for (no = 2; no <= n; no++)
    {
        if (isPrime(no) == 1)
        {
            printf("%d\t", no);
        }
    }

    return 0;
}