/* Queue Problem */
/*#include<stdio.h>

struct queue{
	int front,rear;
	int size;
	int q[200];
	}Q;
	int insert(int v)
	{
		if(rear==-1)
		{
			rear++;
			front++;
			Q[rear]=v;
		}
		else if(rear==size-1)
		{
			printf("Overflow");
		}
		else
		{
			rear++;
			Q[rear]=v;
		}
		
	}
	int remove()
	{
		if(front==-1)
			printf("underflow");
		else if(front==rear)
		{
			printf("value is deleted %d ",q[front]);
			front=rear=-1;
		}
		else
		{
			printf("value is deleted %d ",q[front]);
			front++;
		}
	}
	int display()
	{
		for(i=front;i<rear;i++)
			printf(" ",q[i]);
	}
int main()
{
		queue q1;
		q1.insert(5);
		q1.insert(10);
		q1.insert(15);
		q1.display();
		q1.remove(15);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int a[100];
    int front, rear;
}queue;
void insert(queue* q, int value,int size)
 {
    if (q->rear == size-1)
        printf("Queue overflow\n");
    else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->a[q->rear] = value;
        printf("Inserted %d\n", value);
    }
}
void remove(queue* q)
{
    if (q->front == -1)
        printf("Queue underflow\n");
    else {
        printf("Deleted %d\n", q->a[q->front]);
        q->front++;
        if (q->front > q->rear)
            q->front = q->rear = -1;
    }
}
void print(queue* q)
{
	int i;
	for(i=q->front;i<=q->rear;i++)
	printf("%d ",q->a[i]);
}
int main() 
{
    queue q;
    q.front=-1;
    q.rear=-1;
    insert(&q, 1,100);
    insert(&q, 2,100);
    insert(&q, 3,100);
    remove(&q);
    insert(&q, 4,100);
    remove(&q);
    print(&q);
    return 0;
}*/


#include <stdio.h>
#define MAX_SIZE 100
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};
void enqueue(struct Queue* q, int data) {
    if (q->rear == MAX_SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->items[++q->rear] = data;
}

void dequeue(struct Queue* q) {
    if (q->front == -1) {
        printf("Queue underflow\n");
        return;
    }
    if (q->front == q->rear) {
        q->front = q->rear = -1;
        return;
    }
    q->front++;
}

void unqueue(struct Queue* q) {
    if (q->front == -1) {
        printf("Queue underflow\n");
        return;
    }
    if (q->front == q->rear) {
        q->front = q->rear = -1;
        return;
    }
}

void requeue(struct Queue* q, int data) {
    if (q->front == 0) {
        printf("Requeue not possible\n");
        return;
    }
    q->items[--q->front] = data;
}

void printQueue(struct Queue* q) {
    if (q->front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++)
        printf("%d ", q->items[i]);
    printf("\n");
}

int main()
{
    struct Queue q;
    q.front = -1;
    q.rear = -1;
    int choice, data;
    while (1) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Unqueue\n");
        printf("4. Requeue\n");
        printf("5. Print Queue\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                enqueue(&q, data);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                unqueue(&q);
                break;
            case 4:
                printf("Enter the data: ");
                scanf("%d", &data);
                requeue(&q, data);
                break;
            case 5:
                printQueue(&q);
        break;
}
}}
