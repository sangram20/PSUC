
#include <stdio.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{  int ch;
    while (1)
    {   printf("1.enqueue element  \n");
        printf("2.dequeue element \n");
        printf("3.Display all elements of queue \n");
        printf("Enter your code no.=  ");
        scanf("%d", &ch);
        switch (ch)
        {   case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("Wrong code no.= \n");
        }
    }
}
void enqueue()
{  int add_item;
    if (rear == MAX - 1)
    {printf("Queue Overflow \n");
     return;}
    else
    {  if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}
void dequeue()
{ if (front == - 1 || front > rear)
    {  printf("Queue Underflow \n");
        return ;
    }
    else
    { printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}
void display()
{   int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {  printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
