#include<stdio.h>

struct node
{
    int pos;
    int data;
    struct node *next;
};

struct node *head,*store;

void insert(int pos,int value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->pos=pos;
    temp->data=value;
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

void delet(pos)
{
    store=head;
    if(pos==1)
    {
        store=store->next;
    }
    else
    {
        int i;
        for(i=1; i<pos-1; i++)
        {
            store=store->next;
        }
        store->next=store->next->next;
    }
}

void update(int pos,int value)
{
    store=head;
    if(pos==1)
    {
        store->data=value;
    }
    else
    {
        int i;
        for(i=1; i<pos-1; i++)
        {
                store=store->next;
        }
        store->data=value;
    }
}

void print()
{
    struct node *current=head;
    while(current!=NULL)
    {
        printf("%d %d\n",current->pos,current->data);
        current=current->next;
    }
}

int count()
{
    int count=0;
    struct node *red=head;
    while(red!=NULL)
    {
        count++;
        red=red->next;
    }
    return count;
}

int main()
{
    insert(1,10);
    insert(2,20);
    insert(3,30);
    insert(4,40);
    insert(5,50);
    print();
    delet(3);
    printf("After deleting 3rd node:\n");
    print();
    update(4,60);
    printf("After updating 4th node:\n");
    print();
    int c=count();
    printf("Node number: %d",c);

}
