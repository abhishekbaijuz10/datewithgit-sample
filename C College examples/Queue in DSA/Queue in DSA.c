#include<stdio.h>
#define size 5

void enqueue(int);
void dequeue();
void display();
void peek();

int items[size],front = -1,rear = -1,ch,item;

int main()
{
    while(ch !=5)
    {
        printf("\n1.enqueue");
    printf("\n2.dequeue");
    printf("\n3.display");
    printf("\n4.peek");
    printf("\n5.Quit\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("\nEnter the element to push :");
        scanf("%d",&item);
        enqueue(item);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("\nThe last element is : %d",items[rear]);
        break;
    case 5:
       return 0;
       break;
    }

    }

}
void enqueue(int value)
{
    if(rear == size -1)
    {
        printf("\nQueue is full");
    }
    else
    {
        if(front == -1)
        front = 0;
        rear ++;
        items[rear] = value;
        printf("\nInserted %d",value);
    }
}
void dequeue()
{
    if(front == -1)
        printf("Queue is empty");
            else
    {
        printf("Deleted : %d",items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}
void display()
{
    if(rear == -1)
    printf("Queue is empty");
        else
    {
        printf("Queue elements are :\n");
        for(int i = front; i<= rear; i++)
            printf("%d",items[i]);
    }
    printf("\n");
}
