#include <iostream>

using namespace std;

int main()
{
   int t,sum;
   cin>>t;
   while(t--)
   { sum=0;
      int num;
      cin>>num;
      while(num!=0)
      {
          sum+= num%10;
          num/=10;
      }
      cout<<sum<<endl;
   }

    return 0;
}
