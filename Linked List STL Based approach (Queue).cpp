#include<iostream>
#include<list>
using namespace std;

class Queue
{
	int cs;
	list <int> qu;
	public:
		Queue()
		{
			this->cs = 0;
		}
		bool isempty()
		{
			return this->cs == 0;	
		}
		void enqueue(int data)
		{
			this->qu.push_back(data);
			this->cs+=1;
			
		}
		void dequeue()
		{
			if(!isempty())
			{
				this->cs -=1;
				this->qu.pop_front();	// Remove head of Linked List 
			}
		}
		int getfront()
		{
			return this->qu.front();
		}
};
int main(int argc, char const *argv[])
{
	Queue q;
	for(int i = 0 ; i <= 6 ; i++)
	{
		q.enqueue(i);
	}
	q.dequeue();
	q.enqueue(8);
	while(!q.isempty())
	{
		cout<<q.getfront()<<endl;
		q.dequeue();
	}
	return 0;
}
