#include <stdio.h>

int queue[100], front = 0, rear = -1;

void enqueue(int x) {
    queue[++rear] = x;
}

void dequeue() {
    if(front > rear)
        printf("Queue Empty\n");
    else
        printf("Dequeued: %d\n", queue[front++]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}