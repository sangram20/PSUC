#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{ int data;
  struct node *next;
};
struct node *head;
void main ()
{   int ch;
    while(ch!= 4)
    {   printf("\n1.Push\n2.Pop\n3.display\n");
        printf("\n Enter your code no: \n");
        scanf("%d",&ch);
        switch(ch)
        {  case 1:
               push();
                break;
           case 2:
                pop();
                break;
           case 3:
                display();
                break;
            default:
             printf("invalid code no: ");
        }
    }
}
void push ()
{   int val;
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    { printf("stack is empty\n");
    }
    else
    {   printf("Enter the element");
        scanf("%d",&val);
        if(head==NULL)
        {   ptr->data = val;
            ptr -> next = NULL;
            head=ptr;
        }
        else
        {   ptr->data = val;
            ptr->next = head;
            head=ptr;
        }
    }
}
void pop()
{   int item;
    struct node *ptr;
    if (head == NULL)
    { printf("Underflow");
    }
    else
    {   item = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
    }
}
void display()
{   int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {printf("Stack is empty\n");
    }
    else
    {  printf(" Stack elements \n");
        while(ptr!=NULL)
        {  printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
