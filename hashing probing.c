// hashing table
#include<stdio.h>

void add(int b[])
 {   int x,k=0;
    int i,j,key,f=0;
 

    
  	
        printf("enter element\t");
         scanf("%d",&key);
         int m=10;
   
   
   
        i=key%10;
	while(m--)
	{
	
        if(b[i]==(-1))
          {
		   b[i]=key;
		   break;
	}
		else
		{ 
		i=(i+1)%10;
		}	 			
		
		
  
	}
	for(i=0;i<10;i++)
		  {printf("%d\n",b[i]);}
			
}	
void search(int b[])
{ int ch, x,k=0;
   int i,key,f=0;
  printf("enter element to search \n");
  scanf("%d",&x);
  for(i=0;i<10;i++)
  {
  
   if(x==b[i])
   {printf("element at %d\n",i);
   f=1;
   break;}
  }
  
   if(f==0)
   {printf("element not found \n ");}
}
void main ()
{ int c, x,k=0,b[10];
   int i,key,f=0;
   
   for(i=0;i<10;i++)
    {
     b[i]=-1;
     printf("%d\n",b[i]);
    }
    
    
  
 while(1)
 {
 printf("\n1.add\n2.search\n");
    printf("enter your code no.\n");
    scanf("%d",&c);
      
 switch (c)
 { case 1:
    add(b);
    break;
    
    case 2:
    search(b);
    break;
 }
 }
 
}
   