#include<iostream>
using namespace std;
int maxsub(int*a,int n)
{
    int dp[1000];
    int i;
    for(i=0;i<n;i++)dp[i]=1;
    int j;
    int ans;int currlen;

    for(i=1;i<n;i++)
    {
        int best=-1;
        for(j=0;j<i;j++)
        {
            if(a[j]<=a[i])
                currlen=dp[j]+1;
            best=max(best,currlen);



        }
        dp[i]=best;
        ans=max(dp[i],ans);

    }

    return ans;
}
int main()
{

    int n;
    cin>>n;
    int a[1000];
    int i;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }

    cout<<"Longest Increasing Subsequence:"<<maxsub(a,n);
}
