#include<stdio.h>
void main()
{
int a[50],n,i,key,flag=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
flag=1;
printf("the element %d is found \n at position %d",key,i+1);
break;
}
}
if(flag==1)
{
printf("\nthe search is sucessfull\n");
}
else
printf("\nthe search is unsucessfull\n");
}


