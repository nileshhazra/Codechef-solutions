#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
       int a[N];
       for(int i=0;i<N;i++)
       {
           int val;
           cin>>val;
           a[i]=val;
       }
       for(int j=0;j<N;j++)
       {    int maxnum=0;
           for(int k=j;k<j+K;k++)
           {
               if(j+k==N)
                break;
               else if(a[k]>maxnum)
               maxnum=a[k];

                cout<<maxnum<<endl;

           }

       }












    }
    return 0;
}
