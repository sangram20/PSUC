#include<stdio.h>
 void print(int a[], int n)
    {
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    }
 void bubble(int a[], int n)
 {
   int i, j, temp;
   for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 }
void main ()
{
    int i,a[10],n, j,temp;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     bubble(a, n);
    printf("\nAfter sorting array elements are - \n");
    print(a, n);
}
