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

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int sorted = 0;
    int i;
    while(!sorted)
    {
        sorted = 1;
        i=0;
        while(i<size-1)
        {
            if(tab[i] > tab[i+1])
            {

                swap(&tab[i], &tab[i + 1]);
                sorted = 0;
            }
        i++;
        }
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