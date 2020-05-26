#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<<a<<" ";
		}
		else if(a<b)
		{
			cout<<b<<" ";
		}
		cout<<a+b<<endl;
	}
	return 0;
}
