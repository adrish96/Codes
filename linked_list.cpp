//intro to linked list

#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};
void displayList(struct node *one)
{
	while(one!=NULL)
	{
		cout<<one->data<<" ";
		one=one->next;
	}
}
int main()
{
	struct node* one = NULL;
	struct node* two = NULL;
	struct node* three = NULL;
	one=(struct node*)malloc(sizeof(struct node)); 
	two=(struct node*)malloc(sizeof(struct node)); 
	three=(struct node*)malloc(sizeof(struct node)); 
	one->data=1;
	two->data=2;
	three->data=3;
	one->next=two;
	two->next=three;
	three->next=NULL;
	displayList(one);
	
	return 0;
}
