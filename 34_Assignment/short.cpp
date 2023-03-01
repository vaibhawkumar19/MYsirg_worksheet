#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int item;s
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void InsertAtEnd(int value)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr ->data = value;
    ptr ->next = NULL;
    if ((front == NULL) && (rear == NULL))
    {
        front=rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
    printf("Node is Inserted\n");
}
int DeletionAtBegin()
{
    if (front == NULL)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        struct node *temp = front;
        int temp_data = front ->data;
        front = front ->next;
        free(temp);
        return temp_data;
    }
}

void displayL()
{
    struct node *temp;
    if ((front == NULL) && (rear == NULL))
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("The queue is \n");
        temp = front;
        while (temp)
        {
            printf("%d->", temp ->data);
            temp = temp ->next;
        }

    }
}
typedef struct node Node;
Node *getnode()
{
    Node *p;
    p=(Node *)malloc(sizeof(Node));
    if(p==NULL)
    {
        printf("insufficient memory!!!");

    }
    else
    return p;
}
Node *display(Node *first)
{   
    Node *ptr=first;
    printf("|");
    while(ptr!=NULL)
    {   
        printf("%d|",ptr->item);
        ptr=ptr->next;
    }
    return first;
}
Node *push(Node *first,int ele)
{
    Node *ptr;
    ptr =getnode();
    ptr->item=ele;
    ptr->next=first;
    first=ptr;
    printf("\nelement pushed\n");
    return first;
}
Node *pop(Node *first)
{
    Node *ptr=first;
    if(ptr==NULL)
    {
        printf("\nstack empty\n");
    }
    else
    {
    printf("\nthe element removed is %d \n",ptr->item);
    first=ptr->next;
    free(ptr);
    return first;
    }

}

int main()
{
    int choice,choice1,choice2,value;
    int ch=99999,temp;
    Node *first=NULL;
	do
    {
        printf("\n\n______stack & Queue usin Linked list________\n");
        printf("0.Exit\n1.Stack\n2.Queue\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            do
            {
                printf("\n0.Exit 1.push 2.pop 3.exit\n");
                printf("Enter choice : ");
                scanf("%d", &choice1);
                switch(choice1)
        		{
            	case 1:
                    printf("\nenter a element\n");
                    scanf("%d",&temp);
                    first=push(first,temp);
                    display(first);
                    break;
            	case 2: 
                    printf("\npop\n");
                    first=pop(first);
                    display(first);
                    break;
            	default: 
					printf("invalid");
					exit(0);
                break;
				}
			}
			while(choice1 != 0);	
		}
		else if(choice==2)
		{
		do
			{
				printf("\n0.Exit 1.Insert 2.Delete 3.Display\n");
                printf("Enter choice : ");
                scanf("%d", &choice2);
                switch (choice2)
        		{
        		case 1:
            		printf("\nEnter the value to insert: ");
            		scanf("%d", &value);
            		InsertAtEnd(value);
            	break;
        		case 2:
            		printf("Popped element is :%d\n",DeletionAtBegin());
            	break;
        		case 3:
            		displayL();
            	break;
            	
        		default:
            			exit(0);
               }
            } while (choice2 != 0);
        }

    } while (choice != 0);
    return 0;
}
