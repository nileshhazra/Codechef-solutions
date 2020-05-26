#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long n,k,input,counter=0;
    vector<long> v;
    cin>>n>>k;
    while(n--)
    {
        cin>>input;
        v.push_back(input);
    }
    vector<long>::iterator itr1 = v.begin();
    vector<long>::iterator itr2 = v.end();
    for(vector<long>::iterator itr = itr1;itr!=itr2;++itr)
    {
        if(*itr%k==0)
            ++counter;
    }
    cout<<counter;
    return 0;
}
