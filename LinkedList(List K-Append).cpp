//Problem Statement

/* Given a linked list of length N and an integer K , append the last K elements of a linked list to the front. Note that K can be greater than N.

Input Format
First line contains a single integer N denoting the size of the linked list.
Second line contains N space separated integers denoting the elements of the linked list.
Third line contains a single integer K denoting the number of elements that are to be appended.

Constraints

1 <= N <= 10^4
1 <= K <= 10^4


Output Format
Display all the elements in the modified linked list.

Sample Input
7
1 2 2 1 8 5 6
3
Sample Output
8 5 6 1 2 2 1

*/

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l;
    int length;
    cin>>length;
    int a[length];
    list <int> l3;
    for(int i = 0 ; i < length ; i++)
    {
        cin>>a[i];
        l3.push_back(a[i]);
    }
    int key;
    cin>>key; 
    if(key > length)
    {
        key = key % length;
    }
        list <int> l2;
        int b;
        for (int i = length-key ; i < length ; i++)
        {
            l2.push_back(a[i]);
        }
        for(int i = 0 ; i <length-key ; i++)
        {
            l2.push_back(a[i]);
        }
        for(int i : l2)
        {
            cout<<i<<" ";
        }

    return 0;
}
