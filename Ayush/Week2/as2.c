#include<stdio.h>
int main()
{
    int a[10],b[10],c[20];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<10;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<10;i++)
    {
        c[10+i]=b[i];
    }
    printf("the merged array is ");
    for(int i=0;i<20;i++)
    {
        printf("%d\n",c[i]);
    }
    printf("the reversed loop is");
    for(int i=19;i>=0;i--)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}