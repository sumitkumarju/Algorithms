#include<bits/stdc++.h>
using namespace std;
#define int long long

int dp[55][55];
int ans(int n,int m,int x)
{
    if(n==0&&x==0)
        return 1;
    if(x<0 || n==0)
        return 0;
    if(dp[n][x]!=-1)
            return dp[n][x];
    int c=0;
    for(int i=1;i<=m;i++)
    {
        c+=ans(n-1,m,x-i);

    }
    return dp[n][x]=c;

}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        int m;
        int x;
        cin>>m>>n>>x;
        cout<<ans(n,m,x)<<endl;

    }
    return 0;
}
