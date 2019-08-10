#include<iostream>
#include <fstream>
#include <string>

using namespace std;

int search()
{
	string num;
    std::ifstream myfile("C:/Users/Dell/Desktop/search.txt", std::ios_base::in);
	myfile>>num;
	int t,n,i,j,k,flag=-1,a[50];
	t=atoi(num.c_str());

	for(i=0;i<t;i++)
	{
		myfile>>num;
		n=atoi(num.c_str());
		myfile>>num;
        k=atoi(num.c_str());

		for(j=0;j<n;j++)
		{
			myfile >> num;
			a[i]=atoi(num.c_str());

		}
		if(a[i]==k)
            flag=1;
        else
            flag=-1;

		cout<<flag<<"\n";

	}
}

