#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        char id;
        cin>>id;
        switch(id){
        case'B':
        case'b':
            cout<<"BattleShip";
            break;
        case'C':
        case'c':
            cout<<"Cruiser";
            break;
        case'D':
        case'd':
            cout<<"Destroyer";
            break;
        case'F':
        case'f':
            cout<<"Frigate";
    }}
    return 0;
}
