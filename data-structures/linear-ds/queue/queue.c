#include <stdio.h>
#define MAX 100

typedef struct
{
    int arr[MAX];
    int front;
    int rear;
}queue;

void enqueue(queue *q, int n)
{
    if (q->rear >= MAX)
    {
        printf("Overflow\n");
    }
    q->arr[q->rear] = n;
    q->rear += 1;
}

int dequeue(queue *q)
{
    if (q->front >= q->rear)
    {
        printf("UnderFlow\n");
    }
    int n = q->arr[q->front];
    q->front += 1;
    return n;
}

void print(queue q)
{
    printf("Current Queue: \n");
    for(int i = q.front; i < q.rear; i++)
    {
        printf("%i\n",q.arr[i]);
    }

}

int main()
{
    queue q1;
    int temp, n, x;
    q1.front = 0;
    q1.rear = 0;
    // print(q1);
    printf("Number of elements to enqueue: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &temp);
        enqueue(&q1, temp);
    }
    print(q1);
    printf("Number of elements to dequeue: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (int i = 0; i < n; ++i)
    {
        x = dequeue(&q1);
        printf("dequeued: %d\n", x);
    }
    // printf("front %d rear %d\n", q1.front,q1.rear);
    print(q1);

}
