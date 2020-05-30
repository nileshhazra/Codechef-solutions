#include <iostream>
using namespace std;
int main()
{
    int n, h, count = 0;
    cin>>n >> h;
    while(n--)
    {
        int val;
        cin>> val;
        if(val<=h){
            count++;
        }
        else{
            count+= 2;
        }
    }
    cout<<count;

}
