#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int get_digit_count(int number){
    int digit_count = 0;
    while (number != 0) {
        number /= 10;
        digit_count++;
    }
    return digit_count;
}

int get_digit(int number,int digit){
    for (int i = 1; i <= digit-1; i++)
    {
        number /= 10;
    }
    number %= 10;
    return number; 
}

bool check_palindrome(int number){
    int digit_count = get_digit_count(number);
    bool status = true;
    for (int i = 1; i <= digit_count/2; i++)
    {
        if (get_digit(number,i) != get_digit(number,digit_count + 1 - i )) status = false;
    }
    return status;
}

int main()
{
    int max_palindrome;   
    for (int i = 999; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            int number = i*j;
            if(check_palindrome(number)){
                max_palindrome = i*j > max_palindrome ? i*j : max_palindrome; 
            }
        }
    }
    printf("Result: %d \n",max_palindrome);
}