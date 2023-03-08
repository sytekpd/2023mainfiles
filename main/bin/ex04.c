#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div, mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(void)
{
    int a, b;
    a= 15;
    b= 10;
    ft_ultimate_div_mod(&a, &b);
    printf("Division: %d\nModulus: %d", a, b);
    return (0);
}