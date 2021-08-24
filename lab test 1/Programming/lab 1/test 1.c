
#include <stdio.h>

int main()
{
    long int num, binary_val, decimal_val = 0, base = 1, rem, hexadecimal_val = 0;

    printf("please enter a binary number:");
    scanf("%ld", &num);
    binary_val = num;
    while (num != 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        hexadecimal_val = hexadecimal_val + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("\nthis is the binary value you entered: %d \n", binary_val);
    printf("\nthis is the decimal value: %ld \n",decimal_val);
    printf("\nthis is the hexadecimal value: %lX \n",hexadecimal_val);
    return 0;
}
