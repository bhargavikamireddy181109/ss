#include<stdio.h>
#include</home/bossmool/sort.h>
void booble();
int swap(int a[],int n);
{
int a[]={4,6,2,7,8};
printf("enter array size\n");
scanf("%d",&n);
printf("enter any %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n-1;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("after sorting,the elements are:");
for(i=0;i<=n;i++)
printf("%4d",a[i]);
return 0;
}
