
#include <iostream>
using namespace std;

int maximum()
{
	int i, n, max=0;
	cout<<"Enter the number of integers:";
	cin>>n;
	int a[n];
	cout<<"Enter the integer values:";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{if(a[i]>max)
		max=a[i];
	}
	cout<<"MAXIMUM"<<max;
	return 0;
}

