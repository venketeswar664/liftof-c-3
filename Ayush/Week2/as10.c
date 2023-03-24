#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[50];
    int i,a,d,s;
    d=i=s=a=0;
    printf("Enter a string:");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            a++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            d++;
        }
        else
        {
            s++;
        }
        i++;
    }
    printf("Alphabets = %d\n",a);
    printf("Digits = %d\n",d);
    printf("Special characters = %d",s);
    return 0;
}