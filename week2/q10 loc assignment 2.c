#include<stdio.h>
void main()
{
    clrscr();
    char s[100];
    int alp=0, digit=0,spcl=0,i=0;
    printf("enter a string");
    gets(s);
    while(s[i]!='/0')
    {
        if((s[i]>='a')&&(s[i]<='z')!!(s[i]>='A')&&(s[i]<='Z'))
        {
            alp++;
        }
        if(s[i])
        i++;
        }

        }
    