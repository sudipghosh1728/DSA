// BINARY SEARCH
#include <stdio.h>
void main()
{
    int i,n, ub, lb, mid, s, a[100],flag=0;
    printf("Enter how many elements do you want to take : \n");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the searching element : \n");
    scanf("%d", &s);
    lb = 0;
    ub = n - 1;
    while (lb <= ub)
    {
        mid=(ub+lb)/2;
        if (a[mid] == s){
            flag=1;
            break;
        }
        else if (a[mid] > s)
            ub=mid-1;
        else
            lb=mid+1;
    }
    if(flag==1)
        printf("%d is present in %d position.\n",s,mid+1);
    else
        printf("%d not found.\n",s);
}
