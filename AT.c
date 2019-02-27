#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int a;
    float b;
    struct Node *next;
};

//typedef struct Node node;
struct Node *head = (struct Node*)malloc(sizeof(struct Node));

head ->a = 7;
head ->b = 2.1;
node *temp,*temp1;
temp  = head->next;
temp ->a = 9;
temp ->b = 1.2;
temp1 = temp->next;
temp1 ->a = 11;
temp1 ->b = 3.2;
temp1 ->next = NULL;
void print()
{
    printf("x=%d\t y=%f\n",head->a,head->b);
    printf("x=%d\t y=%f\n",temp->a,temp->b);
    printf("x=%d\t y=%f\n",temp1->a,temp1->b);


}
int main()
{
    print();
    return 0;
}

