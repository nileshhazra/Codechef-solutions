#include <iostream>
using namespace std;

int main()
{
    long long int t ,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int n,j,f=1;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        f=f*j;
    }

    cout<<f<<"\n";

    }
}
