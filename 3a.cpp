#include <bits/stdc++.h> 
using namespace std; 


void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 


int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++) 
	{ 
		
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 


void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		
		int pi = partition(arr, low, high); 

		
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 


void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 


int main() 
{
	int n;
	cout<<"Enter the no. of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	clock_t start,end,t;
	start=clock();
	quickSort(a, 0, n - 1); 
	end=clock();
	cout << "Sorted array: \n"; 
	printArray(a, n); 
	t = end-start;
	cout<<"\nIt took me: "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
	return 0; 
} 
