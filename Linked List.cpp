#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *head=NULL;
void insert_at_begin(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)	
	{
		temp->data=data;
		temp->next=NULL;
		head=temp;	
	}
	else
	{
		temp->data=data;
		temp->next=head;
		head=temp;
	}
}
void insert_at_end(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *count=head;
	temp->data = data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		while(count->next!=NULL)
		{
			count=count->next;
		}
		count->next=temp;
	}
}
void insert_at_pos(int data, int pos)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *x = head, *y;
	temp->data = data;
	temp->next = NULL;
	if(head==NULL || pos==1)
	{
		head=temp;
	}
	else
	{
		while(--pos)
		{
			y=x;
			x=x->next;
			if(x==NULL) break;
		}
		y->next=temp;
		temp->next=x;
	}
}
void delete_at_begin()
{
	struct node *temp=head;
	if(head==NULL) return;
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
	}
	else
	{
		head=temp->next;
		free(temp);
	}
}
void delete_at_end()
{
	struct node *temp=head,*y;
	if(head==NULL) return;
	else if(head->next==NULL)
	{
		head=NULL;
		free(temp);
	}
	else
	{
		while(temp->next!=NULL)
		{
			y=temp;
			temp=temp->next;
		}
		y->next=NULL;
		free(temp);
	}
}
void delete_at_pos(int pos)
{
	struct node *x=head, *y;
	if(head==NULL) return;
	else if(pos==1)
	{s
		head=head->next;
		x->next=NULL;
		free(x);
	}
	else
	{
		while(--pos)
		{
			y=x;
			x=x->next;
			if(x==NULL && pos>1) return;
		}
		y->next=x->next;
		x->next=NULL;
		free(x);
	}
	
}
void display()
{
	struct node *temp= head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n, a, pos, m;
	printf("Enter number of elements to insert\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	while(n>0)
	{
		scanf("%d",&a);
		//insert_at_begin(a);
		insert_at_end(a);
		n--;
	}
	/*printf("Enter number of elements to insert at position");
	scanf("%d",&m);
	printf("Enter the element and the position");
	while(m>0)
	{
		scanf("%d %d",&a,&pos);
		insert_at_pos(a,pos);
		m--;
	}*/
	printf("Before deletions\n");
	display();
	//DELETIONS
	printf("\nEnter number of elements to delete\n");
	scanf("%d",&n);
	/*while(n--)
	{
		//delete_at_begin();
		delete_at_end();
	}*/
	printf("\nEnter positions to delete");
	while(n--)
	{
		scanf("%d",&pos);
		delete_at_pos(pos);
	}
	printf("After deletions\n");
	display();
}
