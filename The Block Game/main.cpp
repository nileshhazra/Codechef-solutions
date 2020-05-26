#include<iostream>
using namespace std;
int main()
{
	int t,m,n,reversenum,num;
	cin>>t;
	while(t--)
	{
		reversenum = 0;
		cin>>n;
		num = n;
		while(n>0)
		{
			m = n%10;
			reversenum = reversenum*10+m;
			n= n/10;
		}
		if(num==reversenum)
		{
			cout<<"wins"<<endl;
		}
		else
		{
			cout<<"losses"<<endl;
		}
	}
	return 0;
}
