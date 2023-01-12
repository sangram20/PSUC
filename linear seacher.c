
#include<stdio.h>

void main()
{
   int i, no,n, search, a[10];

  printf("Enter size of array\n");
  scanf("%d", &no);

  printf("Enter element\n");

  for (i = 0; i < no; i++)
    scanf("%d", &a[i]);

    {
    printf(" number to find:");
    scanf("%d",&n);
    }
    for(i=0;i<=no;i++)
     {
       if(a[i]==n)
        {
          printf("\n %d found at position:%d",n,i);
              break;
         }
      }
    else
        {
           printf("No. not found");
        }
}

