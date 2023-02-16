#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x=2,y=4;
    swap(&x,&y);
    return 0;
}