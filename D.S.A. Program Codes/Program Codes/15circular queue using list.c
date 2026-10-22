//circular queue using linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct Node *n = malloc(sizeof(struct Node));
    if (n == NULL) return;
    n->data = x;

    if (front == NULL)
        front = rear = n;
    else {
        rear->next = n;
        rear = n;
    }
    rear->next = front;
}

void dequeue() {
    if (front == NULL) {
        printf("Queue Empty\n");
        return;
    }

    struct Node *t = front;
    printf("Deleted: %d\n", t->data);

    if (front == rear)
        front = rear = NULL;
    else {
        front = front->next;
        rear->next = front;
    }
    free(t);
}

void display() {
    if (front == NULL) {
        printf("Queue Empty\n");
        return;
    }

    struct Node *t = front;
    do {
        printf("%d ", t->data);
        t = t->next;
    } while (t != front);
    printf("\n");
}

int main() {
    int ch, x;

    while (1) {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
