#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> vec;
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(2); //{5 4 2}

    vector<int>::iterator itr1 = vec.begin();
    vector<int>::iterator itr2 = vec.end();

    sort(itr1,itr2);

    for(vector<int>::iterator itr = itr1;itr!=itr2;itr++)
    {
        cout<<*itr<<" ";
    }
    return 0;
}
