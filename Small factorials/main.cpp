#include <iostream>

using namespace std;

int main()
{
    long t,num,fact;
    cin>>t;
    while(t--){
        fact=1;
        cin>>num;
        if(num==0)
            cout<<1;
        else{
        while(num!=0){
            fact*=num;
            num--;
        }
        cout<<fact<<endl;}
    }

    return 0;
}
