#include<bits/stdc++.h>
using namespace std;
int generate_dp(int a[],int k)
{
     int dp[k+1][4];
     memset(dp,0,sizeof(dp));
     for(int i=2;i<=k;i++)
     {
         for(int j=0;j<4;j++)
         {
             dp[i][j]=INT_MAX;
             for(int j1=0;j1<4;j1++)
             {
                  int p=0;
                  if(a[i-2]>a[i-1])
                  {
                       if(j1>j)
                        p=0;
                       else
                        p=1;

                  }
                  else if(a[i-2]<a[i-1])
                  {
                      if(j1<j)
                        p=0;
                       else
                        p=1;
                  }
                  else
                  {
                       if(j1==j)
                        p=0;
                       else
                        p=1;

                  }


                  dp[i][j]=min(dp[i][j],dp[i-1][j1]+p);
             }

         }
     }
     /*for(int i=0;i<=k;i++)
     {

         for(int j=0;j<4;j++)
             cout<<dp[i][j]<<" ";
         cout<<endl;
     }*/

     int ans=INT_MAX;
     for(int i=0;i<4;i++)
     {
         ans=min(ans,dp[k][i]);
     }
     return ans;
}


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int k;
        cin>>k;
        int a[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        int ans=generate_dp(a,k);
        cout<<"Case #"<<i<<": "<<ans<<endl;


    }
    return 0;
}
