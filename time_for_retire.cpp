// C++ Program to calculate the weeks that you need to retire

#include <iostream>
using namespace std;

int main()
{
	int edad,semanasr;
	cout<<"\nPrograma de Retiro\n";
	cout<<"Edad: ";
	cin>>edad;
	semanasr=(60-edad)*52;
	cout<<"Semanas faltantes para el retiro: "<<semanasr;
	cout<<"\n";
	return 0;
}
