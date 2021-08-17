#include<stdio.h>
#define MAX 3

int stack[MAX],top=-1;
int push();
int pop();
int peek();
int display();

int main(void)
{
  int ch;
  do
  {
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");  
    printf("4.Display\n");  
    printf("5.Quit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: 
             push();
             break;
              
      case 2: 
             pop();
             break;
              
      case 3: 
             peek();
             break;
              
      case 4: 
             display();
             break;
   }           
  }
  while(ch!=5);
 return 0;
 }
 
int push()
  {
   int item;
   if(top==MAX-1)
  {
       printf("Overflow\n");
  }    
   else
  {
     printf("Enter a value to be Pushed: ");
     scanf("%d",&item);
     top=top+1;
     stack[top]=item;
   }
 return 0;
}

int pop()
{
  int val;
    if(top==-1)
      printf("Underflow\n");
    else
    {
      val=stack[top];
      top=top-1;
      printf(" popped element is %d",val);
    }
    return 0;
}

int peek()
{
  if(top==-1)
    printf("Stack is EMPTY\n");
  else
    printf("The top element is %d\n",stack[top]);
    return 0;
}

int display()
{
  int i;
  if(top==-1)
    printf("Stack is EMPTY\n");
  else
  {
    printf("The elements in the stack are: \n");
    for(i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
  }
  return 0;
}