#include<iostream>
using namespace std;
int main()
{
    int a, b,years=0;
    cin>> a>> b;
    while(a<=b)
    {
        a = 3*a;
        b = 2*b;
        years++;

    }
    cout<<years;
}
