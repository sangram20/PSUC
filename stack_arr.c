#include <stdio.h>
#define MAX 5
void pop();
void push();
void display();
int stack_array[MAX];
int top = - 1;

int main()
{  int ch;
    while (1)
    {   printf("1.push element  \n");
        printf("2.pop element \n");
        printf("3.Display all elements\n");
        printf("Enter your code no.=  ");
        scanf("%d", &ch);
        switch (ch)
        {   case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("Wrong code no.= \n");
        }
    }
}
void push()
{  int add_item;
    if (top == MAX - 1)
   { printf("stack Overflow \n");
    return; }
    else
    {  if (top == - 1)

        printf("Inset the element in stack : ");
        scanf("%d", &add_item);
        top = top + 1;
        stack_array[top] = add_item;
    }
}
void pop()
{ if (top == -1)
    {  printf("stack Underflow \n");
        return ;

    }

    else
    { printf("Element deleted from stack is : %d\n", stack_array[top]);
        top = top - 1;
    }
}
void display()
{   int i;
    if (top == - 1)
        printf("stack is empty \n");
    else
    {  printf("stack is : \n");
        for (i =0; i<top+1; i++)
            printf("%d ", stack_array[i]);
        printf("\n");
    }
}

