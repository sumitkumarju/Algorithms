#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr;
    char x=' ';
    int y;
    cin>>noskipws;
    while(x!='\n')
    {
     cin>>y;
     arr.push_back(y);
     cin>>x;
    }

    int n=arr.size();

    int mini=INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,arr[i]);
        sum+=arr[i];
    }
    bool subset[2][sum + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {

            // A subset with sum 0 is always possible
            if (j == 0)
                subset[i % 2][j] = true;

            // If there exists no element no sum
            // is possible
            else if (i == 0)
                subset[i % 2][j] = false;
            else if (arr[i - 1] <= j)
                subset[i % 2][j] = subset[(i + 1) % 2]
             [j - arr[i - 1]] || subset[(i + 1) % 2][j];
            else
                subset[i % 2][j] = subset[(i + 1) % 2][j];
        }
    }
    /*bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));

    for(int i=0;i<=n;i++)
        dp[i][0]=true;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(numbers[i-1]>j)
            {

                dp[i][j]=dp[i-1][j];
            }
            else
            {

                dp[i][j]=dp[i-1][j]|dp[i-1][j-numbers[i-1]];
            }
        }

    }*/
    int i;
    for(i=sum/2;i<=sum;i++)
    {
        if(subset[1][i]||subset[0][i])
            break;
    }
    cout<<max(i,sum-i)<<endl;






}
