#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue{
	int item[size];
	int front;
	int rear;
};
void insert(struct queue *q,int data)
{
	if(q->rear==size-1)
	{
		printf("overflow\n");
		return;
	}
	else 
	{
		++q->rear;
		q->item[q->rear]=data;
	}
}
int delete(struct queue *q)
{
	if(q->front>q->rear)
	printf("underflow\n");
	else
	
{
		return(q->item[(q->front)++]);
}
}
void display(struct queue q)
{   
    int i;
	if(q.front>q.rear)
	printf("call log empty\n");
	else
	{
	printf("the holded call id are\n");
	for(i=q.front;i<q.rear;i++)
	{
		printf("%d\n",q.item[i]);
		
	}
}
}
int main()
{
	int choice;int d;int data;
	struct queue q;
	q.front=0;
	q.rear=-1;
	for(;;)
	{
		printf("enter 1 for insert,2 for delete,3 for display,4 for quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter call id to be inserted\n");
			scanf("%d",&data);
			insert(&q,data);
			break;
			case 2: d=delete(&q);
			printf("deleted call id is %d\n",d);
			break;
			case 3:display(q);
			break;
			case 4:printf("quitting\n");
			return;
			default:printf("no such option");
		}
	}
	return 0;
}
