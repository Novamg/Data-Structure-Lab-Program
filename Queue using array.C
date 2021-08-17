#include<stdio.h>
#include<conio.h>
#define max 10
int queue[max],rear=-1,front=-1;
int insert();
int delete();
int display();
int main(void)
{
	int op;
	do
	{
	    printf("\n------stack------");
	    printf("\n 1,insert");
	    printf("\n 2,delete");
	    printf("\n 3.display");
	    printf("\n 4.exit");
	    printf("\n enter your option");
	    scanf("%d",&op);
	    switch(op)
	    {
		case 1:
		     insert();
		     break;
		case 2:
		     delete();
		     break;
		case 3:
		     display();
		     break;
	    }
	}while(op!=4);
		getch();
	return 0;
}
	insert()
	{
	    int item;
	    if(rear==max-1)
	    {
		printf("overflow");
	    }

	    else
	    {
	       if(front==-1&&rear==-1)
	       {
			front=0;
			rear=0;
	       }
	       else
	       {
			rear=rear+1;
	       }
		  printf("enter the element");
	    scanf("%d",&item);
		queue[rear]=item;
	    }
	    return 0;
	}
	delete()
	{
	    int val;
	    if(front==-1||front>rear)
	    {
		printf("underflow");
	    }
	    else
	    {
		val=queue[front];
		front=front+1;
		printf("the deleted element is %d",val);
	    }
	    return 0;
	}

	display()
	{
	    int i;
	    if(front==-1&&rear==-1)
	    {
		printf("queue is empty");
	    }
	    else
	    {
		printf("------queue-------\n");
		for(i=front;i<rear;i++)
		{
		   printf("%d\t",queue[i]);
		}
	    }
	    return 0;
	}
