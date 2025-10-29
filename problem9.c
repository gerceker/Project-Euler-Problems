#include <stdio.h>
#include <stdlib.h>

int main(){

    for (int a = 1; a < 1000; a++)
    {
        for (int b = 1; b < 1000; b++)
        {
            int c_square = a*a + b*b;
            for (int i = 1; i*i <= c_square; i++)
            {
                if (i*i == c_square)
                {
                    int summation = a + b + i;
                    if (summation == 1000)
                    {

                        printf("a = %d\n",a);
                        printf("b = %d\n",b);
                        printf("c = %d\n",i);
                        
                        printf("abc = %d",a*b*i);
                        return 0;
                    }                    
                }
            }
        }
    }
}