#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    char data[20];
    struct Node* next;
} node;

void insert(node* s, char data[20])
{
    while(s->next !=NULL)
    {
        s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    strcpy(s->next->data,data);
    s->next->next=NULL;
}

void display(node* s)
{
    while(s->next !=NULL)
    {
        printf("%s \n",s->next->data);
        s=s->next;
    }
}
int main()
{
    struct Node *start;
    start=(node*)malloc(sizeof(node));
    start->next=NULL;
    char s[20];

    int i,num;
    printf("Enter the number of node:\n");
    scanf("%d",&num);

    printf("Enter Student Name:\n");
    for(i=0; i<num; i++)
    {
        scanf("%s",s);
        insert(start,s);
    }

    printf("Student Name List:\n");
    display(start);
}
