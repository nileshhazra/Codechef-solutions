#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int input;
        cin>>input;
        if(input == 42)
            break;
        else
            cout<<input;
    }
    return 0;
}
