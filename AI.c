#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head,*store;
int i=0;

void insert(int value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
    if(i==0)
    {
        i=1;
        head=temp;
        store=temp;
    }
    else
    {
        store->next=temp;
        store=store->next;
    }
}
void print()
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    insert(4);
    insert(6);
    printf("The linked list is: ");
    print();
    insert(10);
    printf("\nThe new list is: ");
    print();
    return 0;
}
