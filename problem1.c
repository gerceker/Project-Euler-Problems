#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long sum_of_multiples_3 = 0;
    long long sum_of_multiples_5 = 0;

    int x = 0;

    while (x+3<1000)
    {
        x += 3;
        sum_of_multiples_3 = sum_of_multiples_3 + x;
    }

    x = 0;
    while (x+5<1000)
    {
        x += 5;
        sum_of_multiples_5 = sum_of_multiples_5 + x;
    }
    
    long long total_sum = sum_of_multiples_3 + sum_of_multiples_5;

    printf("Summation: %lld\n",total_sum);

}