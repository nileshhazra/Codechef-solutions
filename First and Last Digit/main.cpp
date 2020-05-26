#include <iostream>

using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int num,sum=0;
        cin>>num;
        sum+=num%10;
        while(num>=10)
        {
            num/=10;
        }
        sum+=num;
        cout<<sum;
    }
    return 0;
}
