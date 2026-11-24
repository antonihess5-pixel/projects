#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

/*int main(void)
{
    int a = 1;
    int b = 2;
    ft_swap(&a, &b);
    printf("%d", a);
    printf("%d", b);
    return (0);
}*/