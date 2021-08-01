#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
	
};
struct node *head=NULL,*tail;

void insertAtB(int x);
void insertAtEnd(int x);
void insertAtPosition(int pos,int x);
void update(int val,int x);
void traverse();
void deleteNode(int pos);
int counting();

void main()
{
	int yes,choice;
	int x,pos,val;
	
	
	printf("\n0.  To end\n");
	printf("1.  To continue\n");
	scanf("%d",&yes);
	printf("\n");
	
	while(yes!=0)
	{	
		printf("2.  To insert data at the begning\n");
		printf("3.  To insert data at the end\n");
		printf("4.  To insert data at specific position\n");
		printf("5.  To update data press\n");
		printf("6.  To traverse data from list\n");
		printf("7.  To delete a node specific posiion\n");
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
				printf("Enter position : ");
				scanf("%d",&pos);
				printf("Enter data : ");
				scanf("%d",&x);
				insertAtPosition(pos,x);
				break;
			case 5:
				printf("Enter data which has to be updated : ");
				scanf("%d",&val);
				printf("Enter new data value : ");
				scanf("%d",&x);
				update(val,x);
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
	struct node *newnode;
	if(head==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=0;
		newnode->prev=0;
		head=newnode;
		tail=newnode;
		return;
	}
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=head;
	newnode->prev=0;
	head->prev=newnode;
	head=newnode;
}

void insertAtEnd(int x)
{
	struct node *newnode;
	if(head==NULL)
	{
		insertAtB(x);
		return;
		
	} 
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->prev=0;
	newnode->next=0;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;	
}

void insertAtPosition(int pos,int x)
{
	int count=counting();
	int c;
	struct node *newnode;
	
	if(head==NULL)
	{
		printf("link is empty please insert data !!\n");
		return;
	}
	else if(pos==1)
	{
		insertAtB(x);
		return;
	}
	else if(pos==count)
	{
		insertAtEnd(x);
		return;
	}
	else if(pos>count || pos<1)
	{
		printf("Position does not exist !!\n");
	}
	else
	{
		struct node *temp;
		newnode=(struct node*)malloc(sizeof(struct node));
		c=1;
		temp=head;
		while(c<pos-1)
		{
			temp=temp->next;
			c++;
		}
		newnode->data=x;
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		return;		
	}
	
}

void update(int val,int x)
{
	struct node *temp;
	temp=head;
	
	if(head==NULL)
	{
		printf("List is empty please enter data\n");
		return;
	}
	
	while(temp!=NULL)
	{
		if(temp->data!=val)
		{
			temp=temp->next;
		}
		else
		{
			temp->data=x;
			printf("Data Updated Sucessfully \n");
			return;
		}
		
	}
	printf("Cannot find value !!\n");
	
}


void traverse()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("List is empty please enter data !!\n");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d-> ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void deleteNode(int pos)
{
	struct node *temp;
	int count=counting();
	int c;	
	
	if(head==NULL)
	{
		printf("List is empty please enter data !!\n");
		return;
		
	}
	else if(count==1)
	{
		
		head=tail=NULL;
		free(head);
		printf("Data at position %d is deleted sucessfully\n",pos);
		return;
	}
	else if(pos==1)
	{
		temp=head;
		head=temp->next;
		head->prev=NULL;
		temp->next=NULL;
		free(temp);	
		printf("Data at position %d is deleted sucessfully\n",pos);
		return;	
	}
	else if(pos==count)
	{
		temp=tail;
		tail=temp->prev;
		tail->next=NULL;
		temp->prev=NULL;
		free(temp);
		printf("Data at position %d is deleted sucessfully\n",pos);
		return;
	}
	else if(pos>count || pos<1)
	{
		printf("Position does not exist !!\n");
		return;
	}
	else
	{
		 c=1;
		temp=head;
		while(c<=count)	
		{
			
				if(c<pos)
			{
				temp=temp->next;
				c++;
			}
			else
			{
				temp->next->prev=temp->prev;
				temp->prev->next=temp->next;
				temp->prev=NULL;
				temp->next=NULL;
				free(temp);
				printf("Data at position %d is deleted sucessfully\n",pos);
				return;	
			}
				
		}
		printf("Cannot find position for deletion !!\n");		
		
	}
}

int counting()
{
	struct node *temp;
	int c=0;
	temp=head;
	/*if(head==NULL)
	{
		c=0;
		return c;
	}*/
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	
	}
	return c;
	
}


