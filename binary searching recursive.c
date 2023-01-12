#include <stdio.h>


int binarySearch(int arr[], int l, int r, int x)
{

if (r >= l)
{

int mid = l + (r - l)/2;


if (arr[mid] == x)
    return mid;


else if (arr[mid] > x)
return binarySearch(arr, l, mid-1, x);

else
return binarySearch(arr, mid+1, r, x);
}


return -1;
}

int main(void)
{

int arr[10];

int n,i ;

int x ;
printf("Enter size array\n");
scanf("%d",&n);
printf("Enter elements in array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter the element to search\n");
scanf("%d",&x);


int result = binarySearch(arr, 0, n-1, x);

 if(result == -1)
printf("Element is not present in array\n");

else
 printf("Element is present at index %d", result);

return 0;
}
