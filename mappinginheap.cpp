#include<string>
#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string,int>m;
	
	// 1. Insert 
	
	m.insert(make_pair("Mango", 100));
	pair<string, int>p;
	p.first = "Apple";
	p.second =120;
	
	m.insert(p);
	
	m["Banana"] = 20;
	
	// 2. Search 
	
	string key;
	cin>>key;
	
	auto it = m.find(fruit);
	if(it!=m.end())
	{
		cout<<"price of"<<fruit<<"is"<<m[fruit]<<endl;
	}
	else 
	{
		cout<<"fruit is not present";
	}
	
	m["litchi"] = 30;
	m["babana"] = 40;
	
	for(auto it = m.begin() ; it != m.end() ; it++)
	{
		cout<<it->first <<"and" <<it->second;
	}
	return 0;
}
