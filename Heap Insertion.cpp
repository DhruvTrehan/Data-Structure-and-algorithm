#include<iostream>
#include<vector>
using namespace std;
class Heap 
{
	vector <int> v;
	bool minHeap;
	
	bool compare(int a, int b)
	{
		if(minHeap)
		{
			return a < b;
		}
		else 
		{
			return a > b;
		}
	}
	void heapify(int idx)
	{
		int left = 2*idx;
		int right = left + 1;
		
		int min_idx = idx;
		int last = v.size() - 1;
		
		if(left <= last && compare(v[left],v[idx]))
		{
			min_idx = left;
		}
		if(right <= last && compare(v[right],v[min_idx]))
		{
			min_idx = right;
		}
		if(min_idx != idx)
		{
			swap(v[idx],v[min_idx]);
			heapify(min_idx);
		}
	}
public:
	Heap(int default_size = 10 , bool type = true)
	{
		v.reserve(default_size);
		v.push_back(-1);
		minHeap = type; 
	}
	
	void push(int d)
	{
		v.push_back(d);
		int idx = v.size() -1;
		int parent = idx / 2; 
		//Keep pushing to the top till you reach root node or stop mid way because current element is greater than parent 
		while(idx > 1 and compare(v[idx],v[parent]))
		{
			swap(v[idx] , v[parent]);
			idx = parent;
			parent = parent / 2;
		}
	}
	int top()
	{
		return v[1];
	}
	void pop()
	{
		//Swap the first and the last element 
		int last = v.size() - 1;
		swap(v[1],v[last]);
		//Deleting root node 
		v.pop_back();
		heapify(1);
	}
	bool empty()
	{
		return v.size()==1;
		
	}
};
int main()
{
	Heap h;
	//Heap h(10,false) ->can turn it into a max heap 
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++)
	{
		int no;
		cin>>no;
		h.push(no);
	}
	while (!h.empty())
	{
		cout<<h.top()<<" ";
		h.pop();
	}
}
