#include<stdio.h>

struct node
{
    int data;
    float type;
    struct node *next;
};

struct node *head,*store;
int i=0;

void insert(int value,float key)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->type=key;
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
        printf("%d %.1f\n",p->data,p->type);
        p=p->next;
    }
}
int main()
{
    insert(5,1.2);
    insert(3,1.8);
    insert(2,3.6);
    print();
    return 0;
}

