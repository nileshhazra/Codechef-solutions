#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int x;
    int largest=a[0],smallest=a[0];
    for(x=0;x<3;x++)
    {
        if(a[x]>largest)
        {
            largest=a[x];
        }
        if(a[x]<smallest)
        {
            smallest=a[x];
        }
    }
    int secondlargest=a[0]+a[1]+a[2]-smallest-largest;
    cout<<secondlargest<<'\n';
}
return 0;
}
