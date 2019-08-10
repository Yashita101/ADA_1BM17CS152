#include <iostream>
using namespace std;

int main()
{
	int i, n, max=0;
	cout<<"Enter the number of integers:";
	cin>>n;
	//scanf("%d",&n);
	int a[n];
	cout<<"Enter the integer values:";
	for(i=0;i<n;i++)
		cin>>a[i];
		//scanf("%d \n",&a[i]);
	for(i=0;i<n;i++)
	{if(a[i]>max)
		max=a[i];
	}
	cout<<"MAXIMUM"<<max;
	return 0;
}
