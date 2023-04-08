#include <stdio.h>

int swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return 0;
}

int main()
{
    int i, j;

    i = 20;
    j = 30;

    swap(&i,&j);
    printf("New value of i:%d\n", i);
    printf("New value of j:%d\n", j);
    return 0;
}