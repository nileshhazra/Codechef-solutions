#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,val,x,a,b;
    cin>>n;
    vector <int> vector1;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        vector1.push_back(val);
    }
    cin>>x;
    vector1.erase(vector1.begin()+(x-1));
    cin>>a>>b;
    vector1.erase(vector1.begin()+(a-1),vector1.begin()+(b-1));
    //output
    cout<<vector1.size()<<"\n";
    for(int j=0;j<vector1.size();j++)
    {
        cout<<vector1[j]<<" ";
    }
    return 0;
}
