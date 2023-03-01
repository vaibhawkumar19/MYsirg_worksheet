#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct 
{
      int s1[maxsize];
      int top;
}stack;
int isStackEmpty(stack *s)
{
    if(s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isStackFull(stack *s)
{
    if(s->top == 99)
    {
        return 1;
    }
        else
    {
        return 0;
	}
}
void push(stack *s)
{
    int num;
     if(isStackFull(s))
            {
                printf("Stack Overflow\n");
            }
      else
      {
            printf ("\nEnter element to be pushed : ");
            scanf ("%d", &num);
            s->top = s->top + 1;
            s->s1[s->top] = num;
      }
      return;
}
int pop (stack *s)
{
      int num;
    if(isStackEmpty(s))
            {
                printf("Stack Underflow\n");
                return -1;
            }
      else
      {
            num = s->s1[s->top];
            printf ("poped element is = %d\n", s->s1[s->top]);
            s->top = s->top - 1;
      }
      return(num);
}
int Top(stack *s)
{
	 int num;
//     if(isStackEmpty())
//            {
//              //  printf("Stack Underflow");
//                return -1;
//            }
//      else
      {
            num = s->s1[s->top];
            printf ("Top element is = %d\n", s->s1[s->top]);
            s->top = s->top;
      }
      return(num);
}
int Size(stack *s)
{
           return s->top+1;
}
void display (stack *s)
{
      int i;
      if (s->top == -1)
      {
            printf ("Stack is empty\n");
            return;
      }
      else
      {
            printf ("\nStatus of elements in stack : \n");
            for (i = s->top; i >= 0; i--)
            {
                  printf ("%d\n", s->s1[i]);
            }
      }  
}
int main ()
{
	stack s;
      int ch;
      s.top = -1;

      printf ("\t STACK OPERATIONS \n");
      printf("----------------------------\n");
      printf("      1. PUSH\n");
      printf("----------------------------\n");
      printf("      2. POP\n");
      printf("----------------------------\n");
      printf("      3. DISPLAY\n");
      printf("----------------------------\n");
      printf("      4. SIZE\n");
      printf("----------------------------\n");
      printf("      5. TOP \n");
      printf("----------------------------\n");
      printf("      6. EXIT\n");
      printf("----------------------------\n");
      while(1)
      {
            printf("\nChoose operation : ");
            scanf("%d", &ch);
            
            switch(ch)
            {
                  case 1:
                        push(&s);
                  break;
                  case 2:
                        pop(&s);
                  break;
                  case 3:
                        display(&s);
                  break;
                  case 4:
                  		Size(&s);
                  case 5:
                  		Top(&s);
                	break;
                  	case 6:
                        exit(0);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}
