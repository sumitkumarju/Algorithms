#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int k;
        cin>>k;
        int n=s.length();
        int dp[n];
        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<i;j++)
            {
                if(abs(s[i]-s[j])<k)
                    dp[i]=max(dp[i],dp[j]+1);

            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        cout<<ans<<endl;
    }
}
