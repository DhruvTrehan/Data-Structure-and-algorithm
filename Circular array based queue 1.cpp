#include<iostream>
using namespace std; 
class Queue 
{
	int *arr;
	int ms; //max size 
	int cs; //current size
	int front; // First element in a queue 
	int rear; // First element in a rear 
	public:
		Queue(int default_size = 7)
		{
			this->front = 0; //front point to 0th index
			this->rear = default_size -1;
			this->ms = default_size;
			this->arr = new int[this->ms]();
			this->cs = 0;
		}
		bool isFull()
		{
			return this->cs == this->ms; //Complete space is used 
		}
		bool isempty()
		{
			return this->cs == 0;	
		}
		void enqueue(int data)
		{
			if(!isFull())
			{
				this->rear = (this->rear + 1) % this->ms;
				this->arr[this->rear] = data;
				this->cs++;
			}
		}
		void dequeue()
		{
			if(!isempty())
			{
				this->front = (this->front + 1) % this->ms;
				this->cs -=1;
			}
			
		}
		int getfront()
		{
			return this->arr[this->front];
			
		}
		
};
int main(int argc, char const *argv[])
{
	Queue q(10);
	for(int i = 1 ; i <= 6 ; i++)
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
