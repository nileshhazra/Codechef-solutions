//lesson : Descriptive Naming of the variables
#include <iostream>

using namespace std;

int main()
{
    float initialBalance,finalBalance;
    int withdrawalAmount;
    cin>>withdrawalAmount;
    cin>>initialBalance;
    if(withdrawalAmount%5==0)
    {
        if(withdrawalAmount+0.50<=initialBalance)
        {
            finalBalance = initialBalance-(withdrawalAmount+0.50);
            cout<<finalBalance;
        }
        else
        {
            cout<<initialBalance;
        }
    }
    else
    {
        cout<<initialBalance;
    }

    return 0;
}
