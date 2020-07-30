#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string a,b;
        cin>>a>>b;
        int n1=a.length();
        int n2=b.length();
        int dp[n1+1][n2+1];
        for(int i=0;i<=n1;i++)
        {

            for(int j=0;j<=n2;j++)
            {

                if(i==0||j==0)
                     dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                {

                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {

                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int i=n1;int j=n2;
        string ans="";
        while(i>0&&j>0)
        {
            if(a[i-1]==b[j-1])
            {

                ans.push_back(a[i-1]);
                i--;j--;
            }
            else
            {

                if(dp[i-1][j]>dp[i][j-1])
                {
                    ans.push_back(a[i-1]);
                    i--;
                }
                else
                {
                    ans.push_back(b[j-1]);
                    j--;
                }
            }

        }
        while(i>0)
        {

            ans.push_back(a[i-1]);
            i--;
        }
        while(j>0)
        {

            ans.push_back(b[j-1]);
            j--;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
