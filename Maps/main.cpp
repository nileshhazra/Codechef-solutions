#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> m;
    int query_number;
    cin>>query_number;
   for(int i=0;i<query_number;i++)
   {
       string student_name;
       int query_type;
       int mark;
       cin>>query_type;
       cin>>student_name;
       if(query_type==1){
        cin>>mark;
        map<string,int>::iterator check = m.find(student_name);
        if(check ==m.end()){
            m.insert(make_pair(student_name,mark));
        }
        else{
            check->second +=mark;
        }
       }
       else if(query_type==2){
        map<string ,int>::iterator itr = m.find(student_name);
       if(itr!=m.end()){
        m.erase(student_name);
       }

       }
       else if(query_type==3){
       map<string ,int>::iterator itr = m.find(student_name);
       if(itr!=m.end()){
        cout<<itr->second<<endl;
       }
       else
        cout<< 0 <<endl;
    }
   }
    return 0;
}
