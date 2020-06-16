//Balanced Paranthesis: A code is written down to find number of balanced parathesis in the code
/* Input: (())
Output: 1 */


#include<iostream>
#include<stack>
using namespace std; 
bool checkexpr(string str)
{
	stack <char> s;
	for(int i = 0 ; i < str.size() ; i++)
	{
		char curchar = str[i];
		if(curchar == '(')
		{
			s.push(curchar);
		}
		else if(curchar == ')')
		{
			if(s.empty() || s.top() !='(')
			{
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
	
}
int main()
{
	string expr;
	cin>>expr;
	
	bool isvalid = checkexpr(expr);
	cout<< isvalid;
	return 0;
}
