#include<stdio.h>
void main()
{
int a[50],i,n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the numbers to be checked");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("even nums are");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("%d",a[i]);
}
}
printf("odd nums are");
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
printf("%d",a[i]);
}
}
}

