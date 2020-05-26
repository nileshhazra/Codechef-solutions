#include <iostream>
#include <utility>

using namespace std;
pair<string,string> elig(string x,int y)
{ pair<string,string> pair1;
    if(y>18)
   {
        pair1.first="You are eligible";
        pair1.second="Hello "+x;
        return pair1;
   }
    else
    {
         pair1.first="You are not eligible";
         pair1.second="Hello "+x;
     return pair1;
    }

}



int main()
{
    pair <string, int> pair1;
    pair<string,string> x;
    cin>>pair1.first;
    cin>>pair1.second;

    x=elig(pair1.first,pair1.second);
    cout<<x.second<<"\n";
    cout<<x.first;





    return 0;
}
