#include<iostream>
#include<vector>
using namespace std; 

class stack 
{
	private:
		vector <int> v; //declaring a vector of type int 
	public:
		void push(int data)
		{
			v.push_back(data);  //function to add data in vector 
		}
		bool empty()
		{
			return v.size()==0;  //checking the size of the vector 
		}
		void pop()
		{
			if(!empty())
			{
				v.pop_back();	//removing the elements from the vector 
			}	
		}
		int top()
		{
			return v[v.size()-1];  //returning the top most element from the vector 
		}
};
	int main()
	{
		stack s; 
		for(int i = 0 ; i<=5 ; i++)
		{
			s.push(i*i);        //adding element in the stack 
		}
		while(!s.empty())
		{
			cout<<s.top()<<endl; //returning the top most element in the stack 
			s.pop();
		}
		return 0;
	}
