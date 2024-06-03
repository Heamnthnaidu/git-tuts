#include<stdio.h>
int main()
{
    int a[50],size,i,pos;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enetr the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where elemnt need to be deleted:");
    scanf("%d",&pos);
    for(i=pos-1;i<=size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    printf("Elements after changing:");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}