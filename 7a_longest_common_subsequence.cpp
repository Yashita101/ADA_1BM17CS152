#include<bits/stdc++.h>
using namespace std;
int max(int a, int b);
void lcs( char *x,char *y,int m,int n)
{
    int l[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                l[i][j]=0;
            else if(x[i-1]==y[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }
    int index=l[m][n];
    char lcs[index+1];
    lcs[index]='\0';
    int i=m,j=n;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            lcs[index-1]=x[i-1];
            i--;
            j--;
            index--;
        }
        else if(l[i-1][j]>l[i][j-1])
            i--;
        else
            j--;
    }
    cout<<"LCS of "<<x<<" and "<<y<<" is "<<lcs;
}
int max(int a,int b)
{
    return (a>b)? a:b;
}
int main()
{
    char x[50],y[50];
    cout<<"Enter Sequence 1: "<<endl;
    cin>>x;
    cout<<"Enter Sequence 2: "<<endl;
    cin>>y;
    int m=strlen(x);
    int n=strlen(y);
    lcs(x,y,m,n);
    return 0;
}
