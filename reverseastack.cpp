#include<iostream>
#include<stack>
using namespace std; 

// Declaring a transfer function to change the values 
void transfer(stack <int> & s1 , stack<int>&s2 , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
}
//Reversing the given stack
void reversestack(stack <int> s1)
{
	stack <int> s2;
	int n = s1.size();
	for(int i = 0 ; i < n ; i++)
	{
		int x = s1.top();
		s1.pop();
		transfer(s1,s2,n-i-1);
		s1.push(x);
		transfer(s2,s1,n - i -1);
	}
}

// Inserting things at bottom 
void insertatbottom(stack <int>&s , int data)
{
	if(s.empty())
	{
		s.push(data);
		return;
	}
	else 
	{
		int y = s.top();
		s.pop();
		insertatbottom(s,data);
		s.push(y);
	}
}

// Calling recursive reverse function to work on stacks 
void recursivereverse(stack <int>& s)
{
	if(s.empty()) return;
	int x = s.top();
	s.pop(); //Popping out the element 
	recursivereverse(s); // Calling the function with remaining stack
	insertatbottom(s,x); //Inserting the popped out element again in stack
}
int main()
{
	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	recursivereverse(s);
	
	while(s.empty() == false)
	{
		cout<<s.top() <<" ";
		s.pop();
	}
	return 0;
}
