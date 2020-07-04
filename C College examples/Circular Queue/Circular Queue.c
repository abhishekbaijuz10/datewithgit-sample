#include<stdio.h>
#define size 5

void enqueue(int);
int dequeue();
void display();
int isfull();
int isemp();

int items[size],front = -1,rear = -1,ch,item;

int main()
{

    while(ch!=4)
    {
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Display");
    printf("\n4.Quit");
    printf("\nEnter the operation to be performed :");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("\nEnter the element to be inserted :");
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
        return 0;
        break;
    }
    }

}
void enqueue(int ele)
{
    if(isfull())
    {
        printf("Enter the queue is full");
    }
    else
    {
        if(front == -1)
            front = 0;
        rear = (rear + 1) % size;
        items[rear] = ele;
        printf("\n %d Inserted",ele);
    }
}
int isfull()
{
    if((front == rear+1 %size) || (front == 0 && rear == size - 1))
        return 1;
    else
        return 0;
}
int dequeue()
{
    int ele;
    ele=items[front];
    if(isemp())
    {
        printf("The Queue is empty ");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }

    else
    {
        front = (front+1) % size;
    }
    printf("\nDeleted element %d",ele);

}
int isemp()
{
    if(front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    int i=front;
    if(isemp())
    {
        printf("The Queue is empty");
    }
    else
        printf("Items are :");
    while(i!=rear)
    {
        printf("%d\n",items[i]);
        i=(i+1)%size;
    }
    printf("%d\n",items[rear]);
}
