#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int amm;
        cin>>amm;
        int count = 0;
        while(amm)
        {
            if(amm>=2048){
            amm-=2048;
            count+=1;}
        else if(amm >= 1024){
            amm -= 1024;
            count+=1;}
        else if(amm >= 512){
            amm -= 512;
            count+=1;}
        else if(amm >= 256){
            amm -= 256;
            count+=1;}
        else if(amm >= 128){
            amm -= 128;
            count+=1;}
        else if(amm >= 64){
            amm -= 64;
            count+=1;}
        else if(amm >= 32){
            amm -= 32;
            count+=1;}
        else if(amm >= 16){
            amm -= 16;
            count+=1;}
        else if(amm >= 8){
            amm -= 8;
            count+=1;}
        else if(amm >= 4){
            amm -= 4;
            count+=1;}
        else if(amm >= 2){
            amm -= 2;
            count+=1;}
        else if(amm >= 1){
            amm -= 1;
            count+=1;}


        }
        cout<<count<<"\n";
    }
    return 0;
}
