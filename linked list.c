#include <stdio.h>
#include <stdlib.h>
struct node
{ int info;
 struct node* link;
};
struct node* start = NULL;
// Function to insert at the front
void insertAtFront()
{  int data;
   struct node* temp;
     temp = malloc(sizeof(struct node));
      printf("\nEnter number to be inserted : ");
      scanf("%d", &data);
     temp->info = data;
     temp->link = start;
     start = temp;
}
// Function to insert at the end of
void insertAtEnd()
{  int data;
   struct node *temp, *head;
     temp = malloc(sizeof(struct node));
     printf("\nEnter number to be inserted : ");
     scanf("%d", &data);
      temp->link = NULL;
      temp->info = data;
      head = start;
   while (head->link != NULL)
    { head = head->link;
      }
      head->link = temp;

}
// Function to delete from the front
void deleteFirst()

{ struct
  node* temp;
    if (start == NULL)
      printf("\nList is empty\n");
    else
    {  temp = start;
       start = start->link;
       free(temp);
    }
}
// Function to delete from the end
void deleteEnd()
{ struct node *temp, *prevnode;
  if (start == NULL)
   printf("\nList is Empty\n");
  else
    { temp = start;
     while (temp->link != 0)
      { prevnode = temp;
        temp = temp->link;
      }
     free(temp);
     prevnode->link = 0;
    }
}

// function to search
void search()
{ int val,i=1,flg=0;
 struct node *temp;
 printf("enter element to search:");
 scanf("%d",&val);
  temp=start;
  if(start==NULL)
    printf("list is empty\n");
    while(temp!=NULL)
  { if(temp->info==val)
     {printf("\n no. is found at %d\n",i);
        flg=1;
     break;
     }
       temp=temp-> link;
      i++;}
   if(flg==0)
    {printf("\n no is not found\n");
    }

  }


// Function to traverse the linked list
void traverse()
 {  struct node* temp;
   if (start == NULL)
    printf("\nList is empty\n");
   else
    {  temp = start;
       while (temp != NULL)
        { printf("Data = %d\n", temp->info);
          temp = temp->link;
        }
    }
}
int main()
{  int choice;
  while (1)
    {   printf("\t1  For insertion at starting\n");
        printf("\t2  For insertion at end\n");
        printf("\t3  For deletion of first element\n");
        printf("\t4  For deletion of last element\n");
        printf("\t5  search\n");
        printf("\t6   To see list\n");

        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

    switch (choice)
         { case 1:
            insertAtFront();
            break;
           case 2:
            insertAtEnd();
            break;

           case 3:
            deleteFirst();
            break;
           case 4:
            deleteEnd();
            break;

           case 5:
            search();
            break;
           case 6:
            traverse();
            break;
            default:
            printf("Incorrect Choice\n");
         }
    } return 0;
}
