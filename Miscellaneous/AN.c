#include<stdio.h>

void insert();

void print();

struct Node
{
    int data;
    struct Node *next,*prev;
};

struct Node *head, *store;

int main()
{
    insert(2,1);
    insert(3,2);
    insert(4,3);
    insert(5,4);
    insert(6,4);
    print();
}

void insert(value,pos)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=NULL;
    temp->prev=NULL;
    if(pos==1)
    {
        head=temp;
        store=temp;
    }
    else
    {
        head=store;
        int i;
        for(i=1;i<pos-1;i++)
        {
        head=head->next;


        }
        temp->next=head->next;
        head->next=temp;
        temp->prev=head;

    }
}

void print()
{
    int i;
    scanf("%d",&i);
    if(i==1)
    {
        while(store!=NULL)
        {
            printf(" %d",store->data);
            store=store->next;
        }
    }
    else if(i==2)
    {
        while(head!=NULL)
        {
        printf(" %d",head->data);
        head=head->prev;
        }
    }
}
