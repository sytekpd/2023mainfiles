#include <stdio.h>

void print(int *tab, int size)
{   
    int i;
    i = 0;
    while(i<size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}


int main(void)
{
    int arr[] = {100,4,5,6,30,8,7,2,9};
    int size;

    size = sizeof(arr) / sizeof(int);

    printf("Size: %d \n", size);

    printf("array before: \n");
    print(arr, size);

    printf("\narray after: \n");

    ft_sort_int_tab(arr, size);
    print(arr, size); 

    return (0);
}