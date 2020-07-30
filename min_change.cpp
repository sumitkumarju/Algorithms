#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
int min_deno(int n,int deno[])
{
    if(n==0)
    {
        return 0;

    }
    if(dp[n]!=-1)
    {

        return dp[n];
    }
    int ans=INT_MAX;
    for(int i=0;i<10;i++)
    {
        if(deno[i]<=n)
        {
             ans=min(ans,1+min_deno(n-deno[i],deno));
        }
    }
    return dp[n]=ans;
}
int main()
{
    int t;
    cin>>t;
    int deno[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    while(t--)
    {
        int n;
        cin>>n;
        memset(dp,-1,sizeof(dp));
        cout<<min_deno(n,deno)<<endl;
    }
	//code
	return 0;
}
