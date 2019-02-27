#include<stdio.h>

struct customer
{
    int id;
    char nm[100];
    struct customer *next;
};

struct customer *head;

insert_after(int a, char nam[])
{
    struct customer *temp, *var;
    temp = (struct customer*)malloc(sizeof(struct customer));
    temp->id = a;
    strcpy(temp->nm, nam);
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    else
    {
        var = head;
        while(var->next != NULL)
            var = var->next;
        var->next = temp;
    }
}

bad(int bd)
{
    struct customer *var, *ag;
    var = head;
    if(head->id == bd)
        head = head->next;
    else
    {
        while(var != NULL)
        {
            if(bd == var->id)
            {
                ag->next = var->next;
                return;
            }
            else
            {
                ag = var;
                var = var->next;
            }
        }
    }
    if(var == NULL)
        printf("\nData is Not Found.\n\n");
}

gunbo()
{
    int cnt=0;
    struct customer *var;
    var = head;
    while(var !=NULL)
    {
        cnt++;
        var = var->next;
    }
    printf("\n\nNumber Of Data:  %d\n", cnt);
}

display()
{
    struct customer *i = head;
    while(i != NULL)
    {
        printf("ID: %d\n", i->id);
        printf("Name: %s\n", i->nm);
        i = i->next;
    }
}

main()
{
    int i, d, iidd, n, ch;
    char name[100];
//    do
//    {
    printf("number of customer: ");
    scanf("%d", &n);
    printf("Insert Customer's ID & Name:\n");
    for(i=0; i<n; i++)
    {
        printf("ID: ");
        scanf("%d", &d);
        printf("Name: ");
        scanf("%s", &name);
        insert_after(d, name);
    }
//        do
//        {
    printf("\n\nTo chech info press 1\nTo count info press 2\nTo delete info press 3\n\n");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
    {
        display();
        return;
    }
    case 2:
    {
        gunbo();
        return;
    }
    case 3:
    {
        printf("id to delete: ");
        scanf("%d", &iidd);
        bad(iidd);
        printf("\n\n");
        display();
        return;
    }
    }
//            printf("\nDo you wanna another operation? (y/n)\n\n");
//        }while(getch() == 'y' || getch() == 'Y');

//        printf("\nDo you wanna continue? (y/n)\n\n");
//    }while(getch() == 'y' || getch() == 'Y');
}
