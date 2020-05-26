#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> table;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int val;
        cin>>val;
        table.push_back(val);
    }
    std::sort(table.begin(),table.end());
    for(int i=0;i<t;i++)
    {
        cout<<table[i]<<"\n";
    }
    return 0;
}
