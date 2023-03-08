#include <stdio.h>
#include <string.h>


int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;

    ft_rev_int_tab(arr, size);
    printf("reverse arr: ");
    while(i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    return (0);
}