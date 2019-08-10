#include <iostream>
#include <fstream>

using namespace std;

int search()
{
    ifstream in("C:/Users/Dell/Desktop/search.txt",std::ios_base::in);
    int i,a[50],j,key,n,test_cases,flag;
    if(!in)
    {
        cout<<"Error in opening the file.";
        return 1;
    }
    while(in)
    {
        //cout<<"Enter the number of test cases.";
        in>>test_cases;
        //cout<<"Enter the number of elements and the key value.";
        for(i=0;i<test_cases;i++)
        {
            in>>n;
            in>>key;
          //  cout<<"Enter the array elements.";
            for(j=0;j<n;j++)
            {
                in>>a[j];
                if(a[j]==key)
                    flag=1;
                else
                    flag=0;
            }
        }
        if(flag==1)
            cout<<"1"<<"\n"<<endl;
        else if(flag==0)
            cout<<"-1"<<"\n";

    }
    return 0;
}
