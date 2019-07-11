#include<iostream>
#include<vector>
#include<iomanip>
#include<cstring>
using namespace std;
int counter;
int memo[1000][1000];
int maxprofit(int*arr,int beg,int last,int year)
{
    ++counter;
    if(beg>last)
        return 0;
    if(memo[beg][last]!=-1)
            return memo[beg][last];
    int q1,q2;
    q1=arr[beg]*year+maxprofit(arr,beg+1,last,year+1);
    q2=arr[last]*year+maxprofit(arr,beg,last-1,year+1);
    int profit=max(q1,q2);
    memo[beg][last]=profit;
    return memo[beg][last];

}
int leastdist(int a[][100],int i,int j)
{
    int dp[100][100];
    dp[0][0]=a[0][0];
    for(int k=1;k<j;k++)
    {

        dp[0][k]=dp[0][k-1]+a[0][k];
    }
    for(int k=1;k<i;k++)
    {

        dp[k][0]=dp[k-1][0]+a[k][0];
    }
    for(int k=1;k<i;k++)
    {

        for(int u=1;u<j;u++)
        {

            dp[k][u]=min(dp[k-1][u],dp[k][u-1])+a[k][u];
        }
    }
    return dp[i-1][j-1];

}
int main()
{

    int data[100][100]={{1,2,3},{4,8,2},{1,5,3}};



    cout<<"MIN:"<<leastdist(data,3,3);
    cout<<"time:"<<counter;
}
