#include<stdio.h>
void main()
{
    int a[100],i,n,s,flag=0;
    printf("Enter the how many elements do you want to take:\n ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the searching element:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("The element is not found");
    if(flag==1)
    printf("The element is found");

}
