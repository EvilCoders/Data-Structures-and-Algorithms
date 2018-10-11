#include <stdio.h>
#define CAP 100

typedef struct stack
{
    int arr[CAP];
    int top;
} stack;

void push(stack *s)
{
    if(s->top >= CAP)
        printf("Overflow\n");
    int x;
    scanf("%d", &x);
    s->arr[s->top] = x;
    s->top += 1;
}

int pop(stack *s)
{
    if(s->top <= 0)
    {
        printf("Underflow\n");
        return -1;
    }
    s->top -= 1;
    int x = s->arr[s->top];
    return x;
}

void print(stack s)
{
    for(int i = 0; i < s.top; i++)
        printf("%d\n", s.arr[i]);
    printf("\n");
}

int main(void)
{
    stack s1;
    int n, t, p;
    s1.top = 0;
    // s1.arr[5] = {1, 2, 3, 4, 5};
    // s1.top = 5;
    printf("Enter no. of element to be pushed: \n");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; ++i)
        push(&s1);
    // printf("%d\n", s1.top);
    printf("Current stack: \n");
    print(s1);
    printf("Enter no. of element to be popped: \n");
    scanf("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        p = pop(&s1);
        printf("popped : %d\n", p);
    }
    // printf("%d\n", s1.top);
    printf("Stack after popping: \n");
    print(s1);

}


