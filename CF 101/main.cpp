#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numberOfPersons , heightOfFence;
    cin>>numberOfPersons>>heightOfFence;
    vector <int> heightOfPersons;
    vector <int>::iterator itr1 = heightOfPersons.begin();
    vector <int>::iterator itr2 = heightOfPersons.end();
    for(vector <int>::iterator itr = itr1;itr!=itr2;++itr)
    {
        int value;
        cin>>value;
        heightOfPersons.push_back(value);
    }

    return 0;
}
