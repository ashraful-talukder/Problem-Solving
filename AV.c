#include<stdio.h>

struct node
{
    int value;
    int position;
    struct node *next;
};

struct node *head,*store;

void insert(int pos,int value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->value=value;
    temp->position=pos;
    temp->next=NULL;
    if(pos==1)
    {
        head=temp;
        store=temp;
    }
    else
    {
        int i;
        store=head;
        for(i=1;i<pos-1;i++)
        {
            store=store->next;
        }
        temp->next=store->next;
        store->next=temp;
    }
}

void print()
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p=head;
    int c=0;
    while(p!=NULL)
    {
        c=++c;
        printf("%d %d\n",p->position,p->value);
        p=p->next;
    }
    printf("Total node number: %d\n",c);
}

void delet(int pos)
{
    store=head;
    if(pos==1)
    {
        head=head->next;
    }
    else
    {
        int i;
        for(i=1;i<pos-1;i++)
        {
            store=store->next;
        }
        store->next=store->next->next;
    }
}

int main()
{
    insert(1,10);
    insert(2,20);
    insert(3,30);
    insert(4,40);
    printf("First time:\n");
    print();
    insert(2,25);
    printf("After adding one more:\n");
    print();
    delet(4);
    printf("After deleting:\n");
    print();
    delet(1);
    printf("After deleting first node:\n");
    print();
    return 0;
}
