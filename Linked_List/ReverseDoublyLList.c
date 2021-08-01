#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
	
};
struct node *head=NULL,*tail;
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
	printf("Reversed List :  \n");
	reverse();
	printf("\n");
	traverse();
	
}

void insertAtEnd(int x)
{
	struct node *newnode;
	if(head==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		head=newnode;
		tail=newnode;
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

void reverse()
{
	struct node *before;
	struct node *temp;
	
	before=NULL;
	temp=head;
	if(head==NULL)
	{
		printf("List is empty please enter data !!\n");
		return;
	}
	
	while(temp!=NULL)
	{
		temp->prev=temp->next;
		temp->next=before;
		
		before=temp;
		temp=temp->prev;
		
	}
	head=tail;
	printf("reversed sucessfully\n");
}
