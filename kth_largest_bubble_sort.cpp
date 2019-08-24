
#include <iostream>
 
using namespace std;
 
void swap(int *a1,int *a2)
{
	int t;
	t=*a1;
	*a1=*a2;
	*a2=t;
} 

int bubble_sort(int a[], int n)
{
	int i,j;
	for(i=0;i<=n-2;i++)
	{
		int swapped=false;
		for(j=0;j<=n-2-i;j++)
	{
		if(a[j]>a[j+1])
			swap(a[j], a[j+1]);
			swapped=true;
	}
	if(swapped=false)
		break;
	}
	return 0;
}

int main()
{
	int arr[100],n,key;
	cout<<"Enter the length of the array."<<endl;
	cin>>n;
	cout<<"Enter the array elements."<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the kth largest element to be searched"<<endl;
	cin>>key;
	bubble_sort(arr, n);
	cout<<"Kth largest elements are:"<<endl;
	for(int i=n-1;i>n-key-1;i--)
		cout<<arr[i]<<endl;
	return 0;
}