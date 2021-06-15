#include<stdio.h>

struct node
{
    int value;
    struct node *next;
};

struct node *head,*store;
int i=0;

void insert(int value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->value=value;
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
        store=temp;
    }
}

void print()
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p=head;
    int count=0;
    while(p!=NULL)
    {
        printf("%d ",p->value);
        count=++count;
        p=p->next;
    }
    printf("\nTotal node number: %d",count);
}




int main()
{
    insert(4);
    insert(6);
    insert(8);
    print();
    return 0;
}
