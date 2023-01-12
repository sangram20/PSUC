#include <stdio.h>

void selection(int arr[], int n)
{
    int i, j, small;

    for (i = 0; i < n-1; i++)
    {
        small = i;

        for (j = i+1; j < n; j++)
        if (arr[j] < arr[small])
            small = j;
//
    int temp = arr[small];
    arr[small] = arr[i];
    arr[i] = temp;
    }
}

void printArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{     int i,a[10],n, j;
       printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selection(a, n);
    printf("\nAfter sorting array elements are - \n");
    printArr(a, n);
    return 0;
}
