#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("enter the elements");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    printf("the copied new string is ");
    for(int i=0;i<10;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}