
// binary search //
#include <stdio.h>
void insert(int a[],int n)
{ int   i, j, temp;

    for (i = 1; i < n; i++)
    {   temp = a[i];
        j = i - 1;

        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    printf("\nAfter sorting a elements are - \n");
     for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
void main()
{
  int i, first, last, middle, n, search, a[10];

  printf("Enter size of array\n");
  scanf("%d", &n);

  printf("Enter element\n");

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

       insert(a,n);

  printf("Enter value to find\n");
  scanf("%d", &search);





      first = 0;
      last = n - 1;
      middle = (first+last)/2;

  while (first <= last) {
    if (a[middle] < search)
      first = middle + 1;
    else if (a[middle] == search) {
      printf(" found at location %d.\n",  middle+1);
      break;
    }
    else
      last = middle - 1;
     middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);



}
