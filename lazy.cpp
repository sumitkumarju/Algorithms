//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;


int modInverse(int a, int m)
{
	a = a%m;
	for (int x=1; x<m; x++)
	if ((a*x) % m == 1)
		return x;
    return INT_MAX;
}

long long int binomial(int n,int k)
{
  int dp[k+1];
  memset(dp,0,sizeof(dp));
  dp[0]=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=min(i,k);j>0;j--)
    {
      dp[j]=dp[j]+dp[j-1];
    }
  }
  return dp[k];
}
void reduceFraction(long long int x, long long int y)
{
    long long int d;
    d = __gcd(x, y);

    x = x / d;
    y = y / d;
    cout <<(x*modInverse(y,1000000007))%1000000007<<endl;
}

int main()
{
  int tst;
  cin>>tst;
  while(tst--)
  {
    int n,t,m;
    cin>>n>>t>>m;
    reduceFraction(binomial(n,t)-binomial(n-m,t),binomial(n,t));
  }
  return 0;
}


