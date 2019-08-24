#include <iostream>
using namespace std;

int selection_sort(int a[], int n, int k)
{
	int i,j,min;
	for(i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i], a[min]);
	}
	return a[k-1];
}

void swap(int *a1, int *a2)
{
	int t;
	t = *a1;
	*a1 = *a2;
	*a2 = t;
}

int main()
{
	int arr[100],n,key,x;
	cout<<"Enter the length of the array."<<endl;
	cin>>n;
	cout<<"Enter the array elements."<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the kth smallest element to be searched"<<endl;
	cin>>key;
	x=selection_sort(arr, n, key);
	cout<<"Kth smallest element is:"<<x<<endl;
	return 0;
}