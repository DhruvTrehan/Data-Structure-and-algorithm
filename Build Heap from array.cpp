#include<iostream>
using namespace std;
void print(vector<int> v)
{
	for (int i:v)
	{
		cout<<i << " ";
	}
	cout<<endl;
}
void buildHeap(vector <int> &v)
{
	for(int i = 2; i <v.size() ; i++)
	{
		int idx = 1; 
		int parent = i / 2; 
		while(idx > 0 and v[idx] > v[parent])
		{
			swap(v[idx] , v[parent]);
			idx = parent ; 
			parent = parent / 2; 
		}
	}
}
int main()
{
	vector <int> v = {-1 , 10 , 20, 5, 6, 1, 8, 9, 4};
	print(v);
}
