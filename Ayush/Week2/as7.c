#include <stdio.h>

int main() 
{
    int a[10],i,j,t;
    printf("Enter the elements of the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    j = 0; 
    for(i=0; i<10; i++) 
    {
        if(a[i] < 0) 
        {
            t= a[i];
            a[i] = a[j];
            a[j] = t;
            j++; 
        }
    }
    printf("Array after moving negative elements to one side: ");
    for(i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}