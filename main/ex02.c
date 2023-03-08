#include <stdio.h>


int main(void)
{
    int n, m;
    n=42;
    m=36;
    printf("n: %d m: %d \n", n, m);
    ft_swap(&n, &m);
    printf("n: %d m: %d", n, m);
    return (0);
}