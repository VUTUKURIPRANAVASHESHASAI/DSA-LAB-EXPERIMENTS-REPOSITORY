//priority queue

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int priority[SIZE];
int count = 0;

void enqueue(int value, int p)
{
    int i;

    if (count == SIZE)
    {
        printf("Priority Queue is Full\n");
        return;
    }

    queue[count] = value;
    priority[count] = p;
    count++;

    // Sort based on priority
    for (i = count - 1; i > 0; i--)
    {
        if (priority[i] < priority[i - 1])
        {
            int temp;

            temp = priority[i];
            priority[i] = priority[i - 1];
            priority[i - 1] = temp;

            temp = queue[i];
            queue[i] = queue[i - 1];
            queue[i - 1] = temp;
        }
        else
        {
            break;
        }
    }

    printf("%d inserted with priority %d\n", value, p);
}

void dequeue()
{
    int i;

    if (count == 0)
    {
        printf("Priority Queue is Empty\n");
        return;
    }

    printf("%d deleted\n", queue[0]);

    for (i = 0; i < count - 1; i++)
    {
        queue[i] = queue[i + 1];
        priority[i] = priority[i + 1];
    }

    count--;
}

void display()
{
    int i;

    if (count == 0)
    {
        printf("Priority Queue is Empty\n");
        return;
    }

    printf("Priority Queue:\n");

    for (i = 0; i < count; i++)
    {
        printf("Value = %d, Priority = %d\n",
               queue[i], priority[i]);
    }
}

int main()
{
    enqueue(10, 3);
    enqueue(20, 1);
    enqueue(30, 2);
    enqueue(40, 5);

    display();

    dequeue();

    display();

    return 0;
}
