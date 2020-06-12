#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l;

    //Creating a int list 
	list<int> l1{1,2,3,4,5,6};

    //Creating in a sring list 
	list<string> l2{"apple","guava","mango","banana"};

    //Push back function 
	l2.push_back("pineapple");
	
	//sort 
	l2.sort();

    //reverse
    l2.reverse();
	
    //Printing the first element 
    cout<<l2.front()<<endl;

    //Removing the first element 
    l2.pop_front();

    //Adding a element in the front 
    l2.push_front("kiwi");

    //Removing the last element of the list 
    l2.pop_back();

    //Printing the last element of the list 
    cout<<l2.back()<<endl;

	//Iterate over the list using Iterators 
    for(auto it = l2.begin(); it!= l2.end() ; it++)
    {
        cout<<(*it)<<" -> ";
    }
    cout<<endl;
	//remove a fruit 
    string f; 
    cin>>f;
    l2.remove(f);

    //Erase one or more elements 

    auto it = l2.begin();
    it++;
    it++;

    //Would remove the element from the second position in the list 

    l2.erase(it);

    //Inserting the element in the list 
    it = l2.begin();
    it++;
    l2.insert(it,"Fruit Juice");

    //Printing all nodes in the Linked List
	for (string s:l2)
	{
		cout<<s<<"-->";
	}
	
}

