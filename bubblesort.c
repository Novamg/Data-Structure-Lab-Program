#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,temp;
clrscr();
printf("Enter limit of the array");
scanf("%d",&n);
printf("Enter the elements");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Array before sorting\n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
for(j=1;j<=n;j++)
{
for(i=1;i<=n-j;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
printf("\n Array after sorting \n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
getch();
}