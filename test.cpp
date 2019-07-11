#include<iostream>
#include<vector>
using namespace std;
int knapSack(int W,vector<int>wt,vector<int>val,int n)
{
   vector<vector<int>>K(n+1,vector<int>(W+1));
   int i, w;


   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   int j;
  cout<<"\n";
  for(i=0;i<n+1;i++)
  {
     for(j=0;j<W+1;j++)
     {
         cout<<K[i][j]<<" ";
     }
     cout<<"\n";
  }

   return K[n][W];
}
int maxpro(vector<int>wt,vector<int>co,int s)
{
 int n=wt.size();
 vector<vector<int>>dp(n,vector<int>(s+1));
 int i;
 for(i=0;i<n;i++)
 {
     dp[0][i]=0;
 }
 for(i=0;i<s+1;i++)
 {
     if(wt[0]<=i)
        dp[0][i]=co[0];
     else
        dp[0][i]=0;
 }
 int j;
 for(i=1;i<n;i++)
 {
     for(j=1;j<s+1;j++)
     {
         if(wt[i]<=j)
          dp[i][j]=max((co[i]+dp[i-1][j-wt[i]]),dp[i-1][j]);
         else
          dp[i][j]=dp[i-1][j];
     }
 }
 cout<<"\n";
 for(i=0;i<n;i++)
 {
     for(j=0;j<s+1;j++)
     {
         cout<<dp[i][j]<<" ";
     }
     cout<<"\n";
 }
 return dp[n-1][s];
}
int main()
{
    int n;
    int s;
    cin>>n;
    cin>>s;
    vector<int>wt(n);
    vector<int>co(n);
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>co[i];
    }

    int a=knapSack(s,wt,co,n);
    int b=maxpro(wt,co,s);
    cout<<a;
}
