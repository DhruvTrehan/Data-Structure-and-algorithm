#include<iostream>
using namespace std;
class node 
{
	public:
		int data;          // data = entered value 
		node* next;        // next = pointer 
		// CONSTRUCTOR 	IS CREATED 
	node (int d)
	{
		data = d;            // The input data 
		next = NULL;         // The adress value 
	}
}; 
//Deleting the node at the head 
void deleteathead(node*&head)
{
	if(head == NULL)
	{
		return; // Means node doesnt exist 
	}
	node *temp = head ; //Storing head in temproray pointer 
	head = head -> next ; // Making head point to the next node 
	delete temp;
	return;
}
//Deleting the node at the tail 
void deleteattail(node*&head)
{
	node *prev = NULL;
	node *temp = head; 
	while(temp -> next != NULL)
	{
		prev = temp;
		temp = temp -> next;
	}
	delete temp;
	prev->next = NULL;
	return;
}
//Deleting using the middle 
void deleteatmiddle(node*&head, int pos)
{
	int i = 1; 
	node*fast = head;
	while (i<pos-1)
	{
		fast = fast->next;
		i++;
	}
	node *prev = fast -> next;
	fast->next = prev -> next;
	delete prev;
	return; 	
}
int main()
{
      node *head = NULL;
      deleteathead(head);
      deleteattail(head);
      deleteatmiddle(head, 2);
      return 0;
 }
