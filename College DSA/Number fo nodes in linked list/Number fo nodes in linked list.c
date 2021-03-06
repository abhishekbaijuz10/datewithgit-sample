#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node * head;

void insert(int data){

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void print()
{
    struct node* temp = head;

    int count = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("\nThe total no.of nodes is %d\n", count);
}

void main()
{
    head = NULL;
    int choice = 0;
    int val = 0;
    while(choice != 3)
    {
        printf("\n1.Insert.\n2.Print.\n3.Exit");
        printf("\nEnter the choice :");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                {
                    printf("\nEnter the value to Insert :");
                    scanf("%d", &val);
                    insert(val);
                    break;
                }
            case 2:
                {
                    print();
                    break;
                }
            case 3:
                {
                    break;
                }
            default:
                {
                    printf("\nWrong choice! Enter valid choice");
                }
        }
    }
}
