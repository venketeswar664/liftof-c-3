#include<stdio.h>
int main()
{
    int a,k=1;
    printf("number of rows ro be printed");
    scanf("%d",&a);
    {
         for(int i=1;i<=a;i++)
         {
            printf("\n");
            for(int j=1;j<=i;j++)
            { 
                printf("%d\t",k++);
            }
        }
    }
    return 0;
}