#include<bits/stdc++.h>
using namespace std;

//push           ----   insert at first 
//insertAfter    ----   insert in between nodes
//append         ----   insert at last

struct node{
	int data;
	struct node *next;
};

void push(struct node** head, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	//struct node new_node;
	new_node->data=new_data;
	new_node->next=*head;
	*head=new_node;
}

void append(struct node** head, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
		head=new_node;
	else
	{
		while(head!=NULL)
			head=head->->next;
	}
	new_node->data=new_data;
	new_node->next=NULL;
	head=new_node;
}
void printList(struct node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	struct node *head=NULL;
	push(&head, 5);
	push(&head, 15);
	push(&head, 25);
	push(&head, 35);
	push(&head, 45);
	append(&head, 1);
	append(&head, 2);
	printList(head);
}
