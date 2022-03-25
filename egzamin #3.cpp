#include <iostream>

using namespace std;

int main()
{
	int n;

	cout<<"input n: ";
    cin>>n;
	if (n<1)
		cout<<"NOT"<<endl;
	else
	{
		int sum=0;
		for (int i=1; i<=n; i++)
			sum+=i;
		cout<<"sum = "<<sum<<endl;
	}

	return 0;
}




