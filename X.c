#include<stdio.h>

int main()
{
    char note[]="My namear is Ashraful and I'm not going to be bored";
    char *p;
    p=note;
    printf("\n 3. %s",note);
    printf("\n 4. %s",++p);
    note[8]='\0';
    printf("\n 1. %s",p);
    printf("\n 2. %s",p++);
    printf("\n 6. %s",p++);
    printf("\n 5. %c",note[6]);
}
