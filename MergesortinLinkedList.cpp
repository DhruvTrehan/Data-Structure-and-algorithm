#include<iostream>
using namespace std;
class node 
{
	public:
		int data;
		node * next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};
void insertattail(node*&head , int data)
{
    node *temp = head; 
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp -> next; 
    }
    node *n = new node(data);
    temp->next = n; 
    return;
}
void build(node*&head)
{
	int data;
	cin>>data;
	while(data != -1)
	{
		insertattail(head,data);
		cin>>data;
	}
}
void print(node*&head)
{
	node* tail = head; 
	while(tail != NULL)
	{
		cout<<tail->data<<"->";
		tail = tail -> next;
	}
	cout<<endl;
}
//Using operator overloading 
istream& operator>>(istream &is, node*&head)
{
	build(head);
	return is;
}
ostream& operator<<(ostream &os, node*&head)
{
	print(head);
	return os;
}
node *midpoint(node*head)
{
	node *slow = head;
	node *fast = head->next;   // updated 
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow ->next;
		fast = fast -> next ->next;
	}
	return slow;
}
node *merge(node*a , node*b)
{
	if(a == NULL)
	{
		return b;
	}
	if(b == NULL)
	{
		return a;
	}
	node *c;
	if (a->data < b->data)
	{
		c = a; 
		c->next = merge(a->next,b);
	}
	else 
	{
		c = b; 
		c->next = merge(a,b->next);
	}
	return c;
}
node* mergesort(node*head)
{
	//Base Case 
	if(head==NULL || head->next ==NULL)
	{
		return head;
	}
	//Recursive case
	//1. Mid Point 
	node *mid = midpoint(head);
	
	//Make 2 Linked List (Dividing the Linked List)
	node *a = head; 
	node *b = mid->next;
	mid->next = NULL; 
	
	//2. Recursively Sort 
	a = mergesort(a);
	b = mergesort(b);
	
	//3. Merging the two arrays (We are not creating any other Linked List, we are creating a pointer variable)
	node *c = merge(a,b);
	return c;
}

int main()
{
	node *head = NULL; 
	cin>>head;
	cout<<head; 
	head = mergesort(head);
	cout<<head; 
}
