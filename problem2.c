#include <stdio.h>
#include <stdlib.h>

int main()
{
 
    int previous_1 = 0;
    int previous_2 = 1;
    int current_value = 0;

    int sum_of_even_numbers = 0;

    while (previous_1 + previous_2 < 4000000)
    {
        current_value = previous_1 + previous_2;
        previous_2 = previous_1;
        previous_1 = current_value;

        if (current_value % 2 == 1)
        {
            sum_of_even_numbers = sum_of_even_numbers + current_value;
        }
        
        printf("%d \n",current_value);
    }
    
    printf("Summation: %d \n", sum_of_even_numbers);

}