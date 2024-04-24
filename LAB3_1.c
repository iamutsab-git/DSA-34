#include <stdio.h>

int arr[100];
int front = -1, rear = -1;
int data,choice,n;       

void enqueue(){
    if (rear == n - 1)
        printf("Queue is full");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter the data to be inserted: ");
        scanf("%d", &data);
        rear++;
        arr[rear] = data;
    }}

void dequeue(){
    if (front == -1 || front > rear)
        printf("Queue is empty");
    else
    {
        printf("The deleted element is %d", arr[front]);
        front++;
    }
}
void display(){
    int i;
    if (front == -1 || front > rear)
        printf("Queue is empty");
    else{
        printf("The elements in the queue are: ");
        for (i = front; i <= rear; i++)
            printf("%d ", arr[i]);
    }}

int main(){
    printf("\n Enter the size of the queue: ");
    scanf("%d", &n);
    printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    while (1)
    {
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
        }}
        return 0;
}

