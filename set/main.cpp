#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int q;
    cin>>q;
    while(q--)
    {
        int y,x;
        cin>>y>>x;
        if(y==1)
        s.insert(x);
        else if(y==2)
        s.erase(x);
        else
        {set<int>::iterator itr=s.find(x);
            if(itr!=s.end())
                cout<<"Yes";
            else
                cout<<"No";
        }


    }
    return 0;
}
