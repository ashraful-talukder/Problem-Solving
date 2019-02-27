#include<stdio.h>

int main()
{
    int i,n,digit=0,vowel=0,lower=0,upper=0;
    char s[1000];
    printf("Enter your string: ");
    gets(s);
    n=strlen(s);
    for(i=0 ; i<n ; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            digit++;
        }
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            vowel++;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            lower++;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            upper++;
        }
    }
    printf("\nDigits: %d\nVowels: %d\nUppercase: %d\nLowercase: %d\n",digit,vowel,upper,lower);
    return 0;
}
