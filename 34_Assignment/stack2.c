#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX 100

int isEmpty(int top)
{
    if (top == -1)
    {
        printf("Stack is empty: Underflow.\n");
        return 1;
    }
    else
    {
        printf("Stack is not empty\n");
        return 0;
    }
}

int isFull(int top)
{
    if (top == STACK_MAX - 1)
    {
        printf("Stack is full: Overflow State\n");
        return 1;
    }else{
        return 0;
    }
    
}

void display(int stack[],int *top){
  int i =0;
  if(isEmpty(*top)){
    printf("\nEmpty Stack:\n");

  }else{
    printf("Stack: ");
    for(i =0; i<=*top; i++){
      printf("%d ",stack[i]);
    }
  }
}

void push(int stack[], int *top, int data)
{

    if (isFull(*top))
        printf("Stack overflow.\n");
    else
    {
        
        *top += 1;
        stack[*top] = data;
    }
}

int pop(int stack[], int *top)
{

    if (isEmpty(*top))
        printf("Stack underflow.\n");
    else
    {
        int ele = stack[*top];
        printf("Popping %d out of the stack\n", ele);
        *top -= 1;
        return ele;
    }
    return -1;
}

int stackTop(int stack[], int *top)
{
    int x = stack[*top];
    printf("%d is top element\n", x);
    return x;
}





int main()
{
    int top = -1;
    int stack[STACK_MAX];
    int choice;
    int data;

    while (1)
    {
        printf("\nChoose any of the following options:\n");
        printf("0: Exit\n1: Push\n2: Pop\n3: Stack Top\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("Enter Element to Push\n");
            scanf("%d",&data);
            push(stack, &top, data);
            display(stack,&top);

            break;
        case 2:
            pop(stack, &top);
            display(stack,&top);
            break;
        case 3:
            stackTop(stack, &top);
            break;
        default:
            printf("Invalid option!");
        }
    }
    return 0;
}

