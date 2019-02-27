#include <stdio.h>
struct node
{
    int data ;
    struct node *next;
};
void insert(int value)


struct node *head,*store;

void main ()
{
    insert(5);
    insert(6);
    insert(7);
    func();
}
void insert(int value)
{
   struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value:
    temp->next=NULL;

if (i==0)
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
void func()
{
    while (head !=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}
