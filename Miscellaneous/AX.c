#include <stdio.h>
#include <stdlib.h>
struct node
{
     int accno;
     char name[25];
     int age;
     int depositemoney;
     struct node *next;

};

struct node *head=NULL,*store;
int c;
     char d;
FILE *fl;
int search()
{
    int svalue,i=0;
    struct node *temp;
    printf("\n Your account No: ");
    scanf("%d",&svalue);
    temp=head;
    while(temp!=NULL)
    {
        i++;
        if(svalue==temp->accno)
        {

          printf("%d\n",temp->accno);
          printf("%s\n",temp->name);
          printf("%d\n",temp->age);
          printf("%d\n",temp->depositemoney);
            return i;
        }
        temp=temp->next;
    }
    printf("\n Not found %d in account in the database.",svalue);
    return 0;
}

int createaccount()
{
  struct node *new_node;
  new_node=(struct node *)malloc(sizeof(struct node));
  printf("Enter the account no:");
  scanf("%d",&new_node->accno);
  printf("Enter Your Name\n");
  scanf("%s",new_node->name);
  printf("Enter Your Age\n");
  scanf("%d",&new_node->age);
  printf("Enter Your deposite money\n");
  scanf("%d",&new_node->depositemoney);
  new_node->next=head;
  head=new_node;

}
int delete(int num)
{
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL)
    {
    if(temp->accno==num)
    {
        if(temp==head)
        {
        head=temp->next;
        free(temp);
        return 1;
        }
        else
        {
        prev->next=temp->next;
        free(temp);
        return 1;
        }
    }
    else
    {
        prev=temp;
        temp= temp->next;
    }
    }
    return 0;
}
int adddir()
{

     struct node *new_node;
     new_node=head;

     while(new_node!=NULL)
     {
          fprintf(fl,"%d\n",new_node->accno);
          fprintf(fl,"%s\n",new_node->name);
          fprintf(fl,"%d\n",new_node->age);
          fprintf(fl,"%d\n",new_node->depositemoney);

          new_node=new_node->next;
     }
     printf("Your information is added in the directory successfully\n");
}
int displayall()
{
     struct node *new_node;
     new_node=head;

     printf("Account information\n");
     while(new_node!=NULL)
     {
          printf("%d\n",new_node->accno);
          printf("%s\n",new_node->name);
          printf("%d\n",new_node->age);
          printf("%d\n",new_node->depositemoney);

          new_node=new_node->next;
     }
}
   int main()
   {
     int c;
     FILE *file;
     file = fopen("code.txt", "r");
     if (file) {
     while ((c = getc(file)) != EOF)
     putchar(c);
     fclose(file);
}
     char ary[10];
     int age;
     int o,n,i;
     char ch;

      printf("\n\nDo you Want to create an account? : press Y/N:");
        gets(ary);
        strlwr(ary);

        if(!strcmp(ary,"n")){
            printf("THANK YOU\n");
            return 0;                                             }
        else if(!strcmp(ary,"y")){

         printf("\nPLease, Enter Your Age\n");
         scanf("%d",&age);
         if(age>=18)
         {
              createaccount();

         }
         else
         {
             printf("\nYou are under age\n");
         }
         }
    do{
    printf("\nDo you want to continue\n");
    ch=getche();


     if(ch=='y'){
     printf("\nEnter 1 create another account \n");
     printf("Enter 2 for deleting your account\n");
     printf("Enter 3 for searching your account information\n");
     printf("Enter 4 for showing all the account's informations\n");
     printf("Enter 5 for exit!\n");
     printf("\nEnter Your choice\n");
     scanf("%d",&n);
     if(n==1)
     {
    int age1;
       printf("AGE:");
       scanf("%d",&age1);
       if(age1>=18){
       createaccount();
       }
       else{
            printf("Sorry you are underage for the next account");
        break;
       }
     }

     else if(n==2)
     {
          int num;
        if(head==NULL)
                printf("Database is Empty\n");
                else{
                printf("Enter the account number to delete : ");
                scanf("%d",&num);
                if(delete(num))
                    printf("Account %d deleted successfully\n",num);
                else
                    printf("Account %d is not found in the database\n",num);
                }

     }
     else if(n==3)
     {
          search();
     }

     else if(n==4)
     {
          int ans;
          int pass=12345,a;

          printf("Are you the manager?? YES/NO:: If yes press 1\t:");
          scanf("%d",&ans);
              if(ans == 1){
            printf("Enter your Pass:");
            scanf("%d",&a);
            if(a==pass)
                {
            displayall();
                }
         else
         {
            printf("Pass is wrong");
         }

         }
     }
    else if(n==5)
     {
          break;
     }

           else
         {
             printf("Wrong choice");
         }
            }

    }while(ch!='n');

     fl = fopen("abc.txt", "a");
     fprintf(fl,adddir());
     fclose(fl);
     return 0;
   }

