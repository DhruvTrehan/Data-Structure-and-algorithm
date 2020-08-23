#include<iostream>
#include<stack>
using namespace std;
void spancalc(int arr[] , int n)
{
    stack <int> s;
    s.push(0);
    int ans[n] = 1;
    for(int i = 0 ; i < n ; i++)
    {
        while(!s.empty() && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        ans[i] = (s.empty()) ? (i+1) : (i-s.top());
        s.push(i);
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"END";
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    spancalc(arr,n);
}
