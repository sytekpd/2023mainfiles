#include <stdio.h>



int main(void)
{
    int num1, num2;
    int div, mod;

    num1 = 123;
    num2 = 10;
    ft_div_mod(num1, num2, &div, &mod);

    printf("Division: %d \nModulus: %d", div, mod);

    return (0);
}