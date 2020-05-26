#include <iostream>

using namespace std;

int main()
{
    int numberOfGames;
    int a=0,d=0;
    cin>>numberOfGames;
    string board;
    cin>>board;
    for(int i=0;i<numberOfGames;++i)
    {
        if(board[i]=="A")
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
