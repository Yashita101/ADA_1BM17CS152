#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return (a>b)? a:b;
}
int knapSack(int W,int w[],int val[],int n)
{
    int V[n+1][W+1],i,j;
    if(n==0 || W==0)
        return 0;
    else
    {

        for(i=0;i<=n;i++)
        {
            for(j=0;j<=W;j++)
            {
                if(i==0 || j==0)
                    V[i][j]=0;
                else if((j-w[i-1])>=0)
                    V[i][j]=max(V[i-1][j], val[i-1]+V[i-1][j-w[i-1]]);
                else
                    V[i][j]=V[i-1][j];
            }
        }
    }
    return V[n][W];
}
int main()
{
    int val[]={12,10,20,15};
    int wt[]={2,1,3,2};
    int W=5;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<knapSack(W,wt,val,n);
    return 0;
}

