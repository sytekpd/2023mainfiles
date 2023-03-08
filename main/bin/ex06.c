#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    i=0;
    while(*str++)
        i++;
    return i;

}

int main(void)
{
    char text[] = "Hello World!";
    int n;
    n=ft_strlen(text);
    printf("%d", n);
    return 0;
}