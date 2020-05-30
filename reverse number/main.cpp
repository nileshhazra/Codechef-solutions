#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> reverseNumber(int num)
{
    vector<int> rev;
    while(num!=0)
    {
        rev.push_back(num%10);
        num/= 10;
    }
    return rev;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        vector<int> res;
        cin>>num;
        res = reverseNumber(num);
        vector<int>::iterator itr1 = res.begin();
        vector<int>::iterator itr2 = res.end();
        for(vector<int>::iterator itr = itr1;itr!=itr2;++itr)
            cout<<*itr;

    }
    return 0;
}
