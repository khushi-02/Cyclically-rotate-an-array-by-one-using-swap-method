#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void rotate(int A[], int n)
{
    int i = 0, j = n-1;
    while(i != j)
    {
        swap(&A[i], &A[j]);
        i++;
    }
}

int main()
{
    int A[] = {47, 68, 2, 31};
    int n = sizeof(A)/sizeof(A[0]);
    int i;
    printf("The original array: \n");
    for(i=0; i<n; i++)
        printf("%d \n", A[i]);
    rotate(A, n);
    printf("The array after rotating cyclically by one \n");
    for(i=0; i<n; i++)
        printf("%d \n", A[i]);
    return 0;
}
