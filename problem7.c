#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int max_prime_count;
    int prime_count = 1;

    printf("How many prime do you want? :");
    scanf("%d",&max_prime_count);
    long long counter = 2;
    while (prime_count <= max_prime_count)
    {
        for (size_t i = 2; i <= counter/2 +1; i++)
        {
            if (counter % i == 0 && counter != 2) break;
            if (i == counter/2 +1)
            {
                printf("%d. prime: %d\n",prime_count,counter);
                prime_count++;
            }
            
        }
        counter++;
    }    
}