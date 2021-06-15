#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("Input.txt", "r");
    fp2=fopen("Output.txt", "w");

    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            putc(ch,fp2);
        }
    }
    printf("file copy successfully");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
