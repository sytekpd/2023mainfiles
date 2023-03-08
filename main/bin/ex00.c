#include <stdio.h>

void ft_ft(int *nbr)
{
    int temp;
    temp = 42;
    *nbr= temp;
}

int main(void)
{
    int n;
    n=9;
    ft_ft(&n);
    printf("%d", n);
    return(0);
}