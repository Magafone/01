#include <iostream>
using namespace std;

int main()
{
	int n,Petia,m =0;
	//cout <<"Enter quantity of line: ";
	cin>>n;
	int Line[n];
	//cout << "Enter a number of element: ";
	for(int i=0;i<n;i++)
	{
		cin>>Line[i];
	}
	cin>>Petia;
	for(int i=0;i<n;i++)
	{
		if(Line[i]>=Petia) m++;
	}
	cout <<m<<endl;
	return 0;
}

