#include <stdio.h>


int main(void)
{
    int a, b;
    a= 15;
    b= 10;
    ft_ultimate_div_mod(&a, &b);
    printf("Division: %d\nModulus: %d", a, b);
    return (0);
}