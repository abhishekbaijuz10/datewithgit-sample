#include<stdio.h>
#define size 5
int deque[size];
int front=-1,rear=-1;

int main()
{
    int ch,f,r;
    while (ch!=8)
    {
        printf("\n1. EnqueueFront\n");
        printf("2. EnqueueRear\n");
        printf("3. DequeueFront\n");
        printf("4. DequeueRear\n");
        printf("5. Display\n");
        printf("6. Getfront\n");
        printf("7. Getrear\n");
        printf("8. Quit\n");
        printf("Enter the operation to be performed :\n");
            scanf("%d",&ch);

            switch(ch)
            {
            case 1:
                printf("Enter the number to be inserted :\n");
                scanf("%d",&f);
                enqueuefront(f);
                break;
            case 2:
                printf("Enter the number to be inserted :\n");
                scanf("%d",&r);
                enqueuerear(r);
                break;
            case 3:
                dequeuefront();
                break;
            case 4:
                dequeuerear();
                break;
            case 5:
                display();
                break;
            case 6:
                getfront();
                break;
            case 7:
                getrear();
                break;
            case 8:
                return 0;
                break;
            }
    }
}
void enqueuefront(int f)
{
    if((front == 0 && rear==size-1) || (front == rear + 1))
    {
        printf("The Queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        deque[front] = f;
        printf("%d inserted\n",deque[front]);
    }
    else if(front == 0)
    {
        front = size -1;
        deque[front] = f;
        printf("%d inserted\n",deque[front]);
    }
    else
    {
        front -- ;
        deque[front] = f;
        printf("%d inserted\n",deque[front]);
    }
}
void enqueuerear(int r)
{
    if((front == 0 && rear==size-1) || (front == rear + 1))
    {
        printf("The Queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        deque[rear] = r;
         printf("%d inserted\n",deque[rear]);
    }
    else if(rear = size - 1)
    {
        rear = 0;
        deque[rear] = r;
        printf("%d inserted\n",deque[rear]);
    }
    else
    {
        rear ++;
        deque[rear] = r;
        printf("%d inserted\n",deque[rear]);
    }
}
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        int i = front;
        while(i!=rear)
       {
            printf("%d,",deque[i]);
            i = (i+1) % size;
       }
        printf("%d",deque[rear]);
    }

}
void getfront()
{
     if(front == -1 && rear == -1)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        printf("%d",deque[front]);
    }

}
void getrear()
{
     if(front == -1 && rear == -1)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
         printf("%d",deque[rear]);
    }

}
void dequeuefront()
{
    if(front == -1 && rear == -1)
    {
        printf("The Queue is Empty\n");
    }
    else if(front == rear)
    {
        printf("Deleted element : %d\n",deque[front]);
        front = rear = -1;
    }
    else if(front == size - 1)
    {
        printf("Deleted element : %d\n",deque[front]);
        front = 0;
    }
    else
    {
        printf("Deleted element : %d\n",deque[front]);
        front ++;
    }
}
void dequeuerear()
{
    if(front == -1 && rear == -1)
    {
        printf("The Queue is Empty\n");
    }
    else if(front == rear)
    {
        printf("Deleted element : %d\n",deque[rear]);
        front = rear = -1;
    }
    else if(front == 0)
    {
        printf("Deleted element : %d\n",deque[rear]);
        rear = size -1;
    }
    else
    {
        printf("Deleted element : %d\n",deque[rear]);
        rear --;
    }

}
