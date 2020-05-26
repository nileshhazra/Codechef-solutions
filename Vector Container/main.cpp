
#include <iostream>
#include <vector>


using namespace std;

int main()
{
	vector<int> g1(1,2,3);
	//for (int i = 1; i <= 5; i++)
	//	{g1.push_back(i);}

cout<<g1.capacity();//why 8
cout<<" "<<g1.empty();
g1.resize(4);
cout<<" "<<g1.size();//

//g1.shrink_to_fit();
cout<<"\n"<<g1[3];
cout<<" "<<g1.at(3);
cout<<" "<<g1.front();
cout<<" "<<g1.back();
cout<<" "<<g1.data();
int* p=g1.data();
cout<<" "<<*p;
	return 0;
}
