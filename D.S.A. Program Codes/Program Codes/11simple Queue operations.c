// Queue Algorithm

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Add an element to the rear of the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full! Cannot insert %d\n", value);
    } else {
        if (front == -1) {
            front = 0; // Initialize front pointer on first insertion
        }
        rear++;
        queue[rear] = value;
        printf("Inserted: %d\n", value);
    }
}

// Remove an element from the front of the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Nothing to remove.\n");
    } else {
        printf("Deleted: %d\n", queue[front]);
        front++;
        
        // Reset the queue pointers if it becomes empty
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    return 0;
}
