#include<stdio.h>
int main()
{
 int n,i,j,a[10],p;
 printf("enter the size of the array\n");
 scanf("%d",&n);
 printf("enter the elements of the array:\n");
 for(i=0;i<=n-1;i++)
  scanf("%d",&a[i]);
printf("enter the position of element to be deleted\n");
scanf("%d",&p);
if(p>=n+1)
{
printf("deletion of element greater than the arraysize\n");
}
else
{
for(i=p-1;i<n-1;i++)
{
a[i]=a[i+1];
}
printf("after deletion:\n");
for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
}
return 0;
}


