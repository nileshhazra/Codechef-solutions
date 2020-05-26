#include <iostream>

using namespace std;

int main()
{
    int heightOfFence;
    int numberOfPersons;
    int width = 0;
        cin>>numberOfPersons>>heightOfFence;
        while(numberOfPersons--)
        {
            int height;
            cin>>height;
            if(height>heightOfFence)
                width +=2;
            else
                width ++;
        }
        cout<<width;

    return 0;
}
