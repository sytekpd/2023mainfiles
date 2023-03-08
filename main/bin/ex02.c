#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

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