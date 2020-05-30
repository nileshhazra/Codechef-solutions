#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n,ctr1=0,ctr2=0;
    cin>> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]=='A'){
            ctr1++;
        }
        else{
            ctr2++;
        }

    }
    if(ctr1>ctr2){
        cout<<"Anton";
    }
    else if(ctr1<ctr2){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }




}
