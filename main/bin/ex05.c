#include <unistd.h>

void ft_putstr(char *str)
{
    char c;
    while(*str != '\0')
    {
        c = *str++;
        write(1,&c,1);
    }
        
}

int main(void)
{   
    char str[] = "Hello world!";
    ft_putstr(str);
    return 0;
}