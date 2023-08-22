#include<stdio.h>
#include<conio.h>
#define Max 10
int a[Max];
int top=-1;
void push(int x)
{
	if(top == Max-1)
	{
		printf("stack is full\n");
		
	}
	else
	{
		top++;
		a[top]=x;
		
	}
}
int pop()
{
	int n;
	if(top==-1);
	{
		printf("stack is empty\n");
	}
	{
		n=a [top];
		top--;
		return(n);
		
	}
}
void display()
{
	int i;
	if (top==-1)
	{
		printf("stack is empty\n");
	
	}
	else
	{
	      for(i=top;i>=0;i--)
		  {
		  	printf("%d\n",a[i]);
		  }
    }
}
   void main()
{
	 push(21);
	 push(32);
	 push(5);
	push(10);
    push(21);
	push(5);
	display();
	printf("%d popped\n",pop());
	display();
	 
}