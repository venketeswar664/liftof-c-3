#include <stdio.h>
int main()
{

    int a[10], m, i;
    printf("Enter value in array");
    for (i=0;i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    m= a[0];
    for (i = 0;i<10; i++)
    {
        if (a[i]>m)
        {
            m=a[i];
        }
    }
    printf("Maximum value of array: %d", m);
    return 0;
}