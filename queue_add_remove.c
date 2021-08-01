#include<stdio.h>
void main()
{
	int queue[10];
	int front,rear,ch,num;
	front=0;
	rear=0;
	while(1)
	{
		printf("1. Add to queue\n");
		printf("2. Remove from queue\n");
		printf("3. Print\n");
		printf("4. Exit\n");
		printf("Enter your choice from above: ");
		scanf("%d",&ch);
		printf("\n");
		if(ch==1)
		{
			if(rear==10)
			{
				printf("Queue is full !!\n");
			}
			else
			{
				printf("Enter number to be added: ");
				scanf("%d",&num);
				printf("\n");
				queue[rear]=num;
				rear++;
				printf("%d added to queue sucessfully\n",num);
			}
		}
		if(ch==2)
		{
					
			if(rear==0)
			{
				printf("Queue is empty !!\n");
			}
			else
			{
				num=queue[front];
				front++;
				if(front==rear)
				{
					front=0;
					rear=0;
				}
				printf("%d is removed sucessfully\n",num);
			}
		}
		if(ch==3)
		{
			int i=0;
			int temp=front;
			if(rear==0)
			{
				printf("Queue is empty !!\n");
				
			}
			else
			{				
				for(i=temp;i<rear;i++)
				{
					printf("%d  ",queue[temp]);
					temp++;
				}
				printf("\n");
			}
		}
		if(ch==4)
		{
			break;
		}
		printf("\n");
	}
}
