#include<iostream>

using namespace std;
int bs(int n)
{
	int beg=0,end=n,mid,a;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if((mid*mid)==n)
			return mid;
		else if((mid*mid)<n)
			{
				beg=mid+1;
				a=mid;
			}
		else
				end=mid-1;
	}
	return a;
}
int main()
{
	int num,result;
	cout<<"Enter the Number whose square root is to be found:"<<endl;
	cin>>num;
	result = bs(num);
	cout<<"The square root of "<<num<<" is "<<result<<endl;
	return 0;
}
