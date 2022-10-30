//BINARY SEARCH
#include<stdio.h>
#include<conio.h>
void main()
{
int ar[100],i,beg=0,n,end,mid,item,flag=0;
clrscr();
printf("How many elements do you want:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
end=n-1;
printf("Enter the elements to be searched:\n");
scanf("%d",&item);
while(beg<=end)
{
mid=(beg+end)/2;
if(ar[mid]==item)
{
printf("found & position=%d",mid+1);
flag=1;
break;
}
if(item>ar[mid])
beg=mid+1;
if(item<ar[mid])
end=mid-1;
}
if(flag==0)
printf("Not found");
getch();
}
