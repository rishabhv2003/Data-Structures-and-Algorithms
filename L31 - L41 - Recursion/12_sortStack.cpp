#include<bits/stdc++.h>
using namespace std;

void insertStack(stack<int> &s,int temp)
{
	if(s.empty() || s.top()<temp)
	{
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	insertStack(s,temp);
	s.push(val);
}
void sortStack(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}
	int temp = s.top();
	s.pop();
	sortStack(s);
	insertStack(s,temp);
}
void printStack(stack<int> &s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main()
{
	stack<int> s;
	int n;
	cin>>n;
	while(n--)
	{	
		int num;
		cin>>num;
		s.push(num);
	}
	cout<<"before sort"<<endl;
	printStack(s);
	cout<<endl;
	sortStack(s);
	cout<<"after sort"<<endl;
	printStack(s);
	return 0;
}