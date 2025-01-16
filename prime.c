#include <stdio.h>

int main()
{
    int number, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("%d is not a prime number.\n", number);
        return 0;
    }

    // Check divisibility from 2 to sqrt(number) for efficiency
    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0; // Mark as not prime
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
