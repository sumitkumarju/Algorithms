#include<iostream>
using namespace std;
//true for infinite supply of coins
bool possible(int*coin,int n,int v)
{
    bool dp[1000][1];
    int i,j;
    dp[0][0]=true;
    for(i=1;i<1000;i++)dp[i][0]=false;

    for(i=1;i<=v;i++)
    {
        for(j=0;j<n;j++)
        {
            if(coin[j]<=i)
                dp[i][0]=dp[i-coin[j]][0];

        }
    }
    return dp[v][0];


}
bool isSubsetSum(int set[], int n, int sum)
{
   // Base Cases
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   // If last element is greater than sum, then ignore it
   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);

   /* else, check if sum can be obtained by any of the following
      (a) including the last element
      (b) excluding the last element   */
   return isSubsetSum(set, n-1, sum) ||
                        isSubsetSum(set, n-1, sum-set[n-1]);
}
int main()
{

     int coins[] = {25, 10, 5};
     int n=sizeof(coins)/sizeof(int);
     int v = 20;
     cout<<"POSSIBLE:"<<isSubsetSum(coins,n,v);

}
