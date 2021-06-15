#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char name[30];
    char id[15];
    double TotalMarks;
    struct node *next;
} a;
a *head,*store;
int i;
void insert(char name[30],char id[15],int num)
{
    a *temp=(a*)malloc(sizeof(a));
    strcpy(temp->name,name);
    strcpy(temp->id,id);
    temp->TotalMarks=num;
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
    a *p=head;
    int c=1;
    while(p!=NULL)
    {
        printf("%d. ",c);
        printf("%s\t",p->name);
        printf("%s\t",p->id);
        printf("%.2f\n",p->TotalMarks);
        p=p->next;
        ++c;
    }
}
int main()
{
    int i;

    printf("1. Insert a student's information\n2. Delete a student's information\n3. Update a student's information\n4. Print the list\n5.Quit\n");
    scanf("%d",&i);
    do
    {
        printf("1. Insert a student's information\n2. Delete a student's information\n3. Update a student's information\n4. Print the list\n5.Quit\n");
        printf("\nEnter your choice: ");
        int a;
        scanf("%d",&a);
        if(a==1)
        {
            char name[20],id[12];
            double num;
            printf("\nEnter the student's name: ");
            scanf("%s",name);
            printf("\nEnter the student's ID: ");
            scanf("%s",id);
            printf("\nEnter the total marks he obtained: ");
            scanf("%lf",&num);
            insert(name,id,num);
        }
        else if(a==2)
        {
            printf("Enter the id of the student you want to delete: ");
            char l[12];
            scanf("%s",l);
            //delet(l);
        }
        else if(a==3)
        {
            print();
            printf("Enter the student's serial no on the list: ");
            int r;
            scanf("%d",&r);
            printf("\nWhat you want to update?\n1.Name\2.ID\n3.Marks\nEnter your choice: ");
            int q;
            if(q==1)
            {
                char nam[20];
                scanf("%s",nam);

            }
            else if(q==2)
            {

            }
            else if(q==3)
            {

            }
        }
        else if(a==4)
        {
            print();
        }

    }
    while(i!=6);

}
