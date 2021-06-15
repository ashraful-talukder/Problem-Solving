#include<stdio.h>

void insert(int d,int pos);

void delet(int pos);

void print();

struct node
{
    int data;
    struct node *next;
};

struct node * head,*store;

int main()
{
    insert(2,1);
    insert(4,2);
    insert(6,3);
    insert(8,4);
    print();
    printf("\n");
    delet(3);
    print();
}

void insert(int d,int pos)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
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
        for(i=1; i<pos-1; i++)
        {
            store=store->next;
        }
        temp->next=store->next;
        store->next=temp;
    }
}

void delet(int pos)
{
    store=head;
    if(pos==1)
    {
       head=head->next;
       store=store->next;
    }
    else
    {
        int i;
        store=head;
        for(i=1; i<pos-1; i++)
        {
            store=store->next;
        }
        store->next=store->next->next;

    }

}

void print()
{
    struct node* temp= head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;

    }
}
