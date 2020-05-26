#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=0,j=0,a,b,x=0,y=0;
    while(n--){
        cin>>a>>b;
        i+=a;
        j+=b;
        if(i>j&&x<i-j) x=(i-j);
        else if(y<j-i) y=(j-i);
    }
    if(x>y) cout<<"1 "<<x;
    else cout<<"2 "<<y;
	return 0;
}
