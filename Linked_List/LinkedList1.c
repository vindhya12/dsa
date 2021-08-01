#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;

void insertAtB(int x);
void insertAtEnd(int x);
void insertAtIndex(int index,int x);
void update(int u,int x);
void deleteNode(int pos);
void traverse();
int counting();


void main()
{
	int yes,choice;
	int x,index,u;
	int pos;
	
	printf("\n0.  To end\n");
	printf("1.  To continue\n");
	scanf("%d",&yes);
	printf("\n");
	
	while(yes!=0)
	{	
		printf("2.  To insert data at the begning\n");
		printf("3.  To insert data at the end\n");
		printf("4.  To insert data at specific index\n");
		printf("5.  To update data press\n");
		printf("6.  To traverse data from list\n");
		printf("7.  To delete a node from list\n");
		scanf("%d",&choice);
		printf("\n");
		
		switch(choice)
		{
			case 2 :
				printf("Enter data : ");
				scanf("%d",&x);
				insertAtB(x);
				break;
			case 3:
				printf("Enter data : ");
				scanf("%d",&x);
				insertAtEnd(x);
				break;
			case 4:
				printf("Enter index value : ");
				scanf("%d",&index);
				printf("Enter data : ");
				scanf("%d",&x);
				insertAtIndex(index,x);
				break;
			case 5:
				printf("Enter data which has to be updated : ");
				scanf("%d",&u);
				printf("Enter new data value : ");
				scanf("%d",&x);
				update(u,x);
			case 6:
				traverse();
				break;
			case 7:
				printf("Enter the position of node you want to delete : ");
				scanf("%d",&pos);
				deleteNode(pos);
				break;
			default:
				printf("Operation does not exist\n");
		}
		
	printf("\n0.  To end\n");
	printf("1.  To continue\n");
	scanf("%d",&yes);
	printf("\n");
		
	}
}

void insertAtB(int x)
{
	struct node *new;
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=x;
		head->link=NULL;
		return;
	}	
	new=(struct node *)malloc(sizeof(struct node));
	new->data=x;
	new->link=head;
	head=new;	
	
}

void insertAtEnd(int x)
{
	struct node *temp;
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=x;
		head->link=NULL;
		return;
	}
	
	temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;		
	}
	temp->link=(struct node *)malloc(sizeof(struct node));
	temp->link->data=x;
	temp->link->link=NULL;		
	
}

void insertAtIndex(int index,int x)
{
	struct node *temp,*new;
	int j;
	int count=counting();
	if(index==0)
	{
		insertAtB(x);
		return;
	}
	
	 else if(index>count || index==count )
	{
		printf("Index out of bound--index does not exist!!\n");
		return;
	}
	 else if(index==count-1)
	{
		insertAtEnd(x);
		return;
	}
	
	
	else
	{
	
		temp=head;
		for(j=0;j<index-1;j++)
		{
			temp=temp->link;
		}
		new=(struct node *)malloc(sizeof(struct node));
		new->data=x;
		new->link=temp->link;
		temp->link=new;
	}
	
	
}

void update(int u,int x)
{
	struct node *temp;
	temp=head;
	//int count=counting();
	//int c=0;
	
	if(head==NULL)
	{
		//printf("List is empty please enter data\n");
		return;		
	}
	while(temp!=NULL)
	{
		if(temp->data!=u) //&& (c<count || c==count))
		{
			//c++;
			temp=temp->link;
		}		
		else
		{
			temp->data=x;
			printf("Data Updated Sucessfully \n");
			return;
		}
	}
	printf("data to be Updated not found !!\n");
			
}

void deleteNode(int pos)
{	
	struct node *temp;
	int count=counting();
	
	if(head==NULL)
	{
		printf("List is empty please enter data\n");
		return;
	}
	else if(pos<1)
	{
		printf("Position does not exist for deletion !!\n");
		return;
	}
	else if(pos==1)
	{
		
		temp=head;
		head=head->link;
		free(temp);
		printf("Data at position %d is deleted sucessfully\n",pos);
		return;
	}
	else if(pos==count)
	{		
		temp=head;
				
		while(temp->link->link!=NULL)
		{
			temp=temp->link;
		}
		free(temp->link);
		temp->link=NULL;
		printf("Data at position %d is deleted sucessfully\n",pos);
		return;
		
	}
	else
	{
		int c=1;
		while(c<=count)
		{
			
			temp=head;
			if(c<pos)
			{
				temp=temp->link;
				c++;
			}
			struct node *ptr;
			ptr=temp->link;
			temp->link=ptr->link;
			free(ptr);
			printf("Data at position %d is deleted sucessfully\n",pos);
			return;
			
		}
	}
	
	printf("Position does not exist for deletion !!\n");
	
	
}


void traverse()
 {
	struct node *ptr;	
	if(head==NULL)
	{
		printf("List is empty please enter data !!\n");
	}
		
	ptr=head;
	while(ptr!=NULL)
	{			
		printf("%d--> ",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}

int counting()
{
	int c=0;
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
	}
	return c;
}


