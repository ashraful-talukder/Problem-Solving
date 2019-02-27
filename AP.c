#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int d;
    struct node *n;
}a;

a *head=NULL;

void insertatbegin(int v)
{
    a *temp=(a*)malloc(sizeof(a));
    temp->d=v;
    temp->n=head;
    head=temp;
}

void print()
{
    a *var=head;
    while(var!=NULL)
    {
        printf("%d ",var->d);
        var=var->n;
    }
}

int main()
{
    insertatbegin(10);
    //print();
    insertatbegin(20);
    //print();
    insertatbegin(30);
    print();
}
