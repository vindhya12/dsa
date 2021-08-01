#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertAtEnd(int x);
void traverse();
void reverse();



void main()
{
	int n,i;
	int x;
	printf("Enter no of elements you want to insert in linked list : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter data you want to insert :");
		scanf("%d",&x);
		insertAtEnd(x);
		printf("\n");
	}
	traverse();
	printf("\n");	
	reverse();	
	printf("List is reversed sucessfully\n");
	traverse();
	
	
}

void insertAtEnd(int x)
{
	struct node *temp;
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=x;
		head->next=NULL;
		return;
	}
	
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;		
	}
	temp->next=(struct node *)malloc(sizeof(struct node));
	temp->next->data=x;
	temp->next->next=NULL;		
	
}

void traverse()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("List is empty please enter data !!\n");
	}
	while(temp!=NULL)
	{
		printf("%d-> ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void reverse()
{
	struct node *temp,*prev,*nextnode;
	
	prev=NULL;
	temp=head;
	nextnode=NULL;
	
	if(head==NULL)
	{
		printf("List is empty enter data !!\n");
	}
	
	while(temp!=NULL)
	{
		nextnode=temp->next;
		temp->next=prev;		
		prev=temp;
		temp=nextnode;
		
	}
	head=prev;
	
	
	
}
