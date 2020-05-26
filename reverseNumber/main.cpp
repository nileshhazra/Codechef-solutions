#include <iostream>

using namespace std;

int main()
{
    int t,remainder;
    cin>>t;
    while(t--)
    {
        long num,remainder,reversedNumber=0;
        cin>>num;
        while(num != 0)
    {
        remainder = num%10;
        reversedNumber = reversedNumber*10 + remainder;
        num /= 10;
    }
    cout<<reversedNumber<<endl;
    }
    return 0;
}
