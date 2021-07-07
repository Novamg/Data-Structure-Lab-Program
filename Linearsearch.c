#include<stdio.h>
#include<conio.h>
void main()
{
int a[15],i,j=1,n,val,pos=-1;
clrscr();
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("Array\n");
for(i=i;i<=n;i++)
{
printf("%d",a[i]);
}
printf("Enter the element to be searched");
scanf("%d",&val);
while(j<=n)
{
if(a[j]==val)
{
pos=j;
printf("%d found at location %d",val,pos);
}
j=j+1;
}
if(pos==-1)
printf("VALUE NOT PRESENT");
getch();
}