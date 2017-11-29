// C++ Program to calculate the weeks that you need to retire

#include <iostream>
using namespace std;

int main()
{
	int age,wretire;
	cout<<"\nRetire Program\n";
	cout<<"Age: ";
	cin>>age;
	wretire=(60-age)*52;
	cout<<"Weeks to retire: "<<wretire;
	cout<<"\n";
	return 0;
}
