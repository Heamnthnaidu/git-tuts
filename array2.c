#include<stdio.h>
int main()
{
    int a[50],size,i,pos,num;
    printf("Enter the size");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where to number should be added:");
    scanf("%d",&pos);
    printf("enter the number should be added:");
    scanf("%d",&num);
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("elements after changing:");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}