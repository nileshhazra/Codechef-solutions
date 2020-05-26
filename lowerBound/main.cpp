#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    int n,x;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        vec.push_back(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int key;
        cin>>key;
        vector<int>::iterator itr1 = vec.begin();
        vector<int>::iterator itr2 = vec.end();

            vector<int>::iterator check =lower_bound(vec.begin(),vec.end(),key);
            if(*check==key)
                cout<<"Yes";
            else
                cout<<"No";

            cout<<" "<<check-itr1 +1;



        }






    return 0;
}
