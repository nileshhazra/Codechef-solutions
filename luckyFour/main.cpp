#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int ctr=0;
        while(num>0)
        {
            int temp;
            temp = num%10;
            if(temp == 4){
               ctr++;
               num/=10;
            }

            else
                num/=10;


        }
        cout<<ctr<<endl;

    }
    return 0;
}
