#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    for (size_t i = 1; i <= 100; i++)
    {
        int result = i*(i+1)*i*(i+1)/4 - i*(i+1)*(2*i +1)/6;
        printf("Result(%d): %d \n", i,result);
    }
}