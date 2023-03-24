#include<stdio.h>
int main()
{
    char a[20];
    int v=0,c=0;
    printf("enter the string");
    for(int i=1;i<=20;i++)
    {
        scanf("%c",&a[i]);
    }
    printf("string is;");
    for(int i=1;i<=20;i++)
    {
        printf("%c",a[i]);
    }
    for(int i=1;i<=20;i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'|| a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        v++;
        else if (a[i]==' ')
        continue;
        else
        c++;
    }
    printf("the number of vowels is %d",v);
    printf("the number of consonatnts is %d",c);
    


return 0;
}