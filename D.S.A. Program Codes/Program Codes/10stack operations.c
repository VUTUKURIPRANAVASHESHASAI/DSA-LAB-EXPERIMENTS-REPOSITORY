/*
Stack
1. Push
2. Pop
3. Peek
*/

// 1. push
int top = -1;
#include <stdio.h>
#define max 5
void push(int *arr);
void pop(int value, int arr[]);
void peek(int value);

int main()
{
    int num[6] = {1, 2, 3, 4, 5, 6};
    push(num);
    pop(3, num);
    return 0;
}

void push(int *arr)
{
    int ar[max];
    if (top == max - 1)
    {
        printf("stack or array is full");
    }
    else
    {
        top++;
        for (int i = 0; i < max; i++)
        {
            ar[top] = arr[i];
            printf("%d pushed into the stack at index %d.\n", ar[top], top);
            top++;
        }
        peek(ar[top]);
    }
}

void peek(int value)
{
    printf("peek value in the stack : %d \n", value);
}

void pop(int value, int arr[])
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j <= max; j++)
            {
                arr[j] = arr[j + 1];
                top--;
                c = 1;
            }
            printf("arr[%d] is deleted", i);
        }
    }
    if (c == 0)
    {
        printf("value not found!");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }
}