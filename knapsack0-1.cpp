#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[20005],b[2005];
int dp[2005][2005][8];
int mancunian(int i,int j,int k)
{



	if(dp[i][j][k]!=-1)
	{
		return dp[i][j][k];
	}
	int res=0;
    if(i>=m||j>=n)
	   return 0;
	if(a[i]==a[j])
	  res=1+mancunian(i+1,j+1,k);
	else
	  {
		  if(k>0)
		   res=1+mancunian(i+1,j+1,k-1);
		  res=max(res,mancunian(i+1,j,k));
		  res=max(res,mancunian(i,j+1,k));
	  }
	  return dp[i][j][k]=res;


}
int main() {
	memset(dp,-1,sizeof(dp));
	cin>>m>>n>>k;
	for(int i=0;i<m;i++)
	 cin>>a[i];
	for(int i=0;i<n;i++)
	 cin>>b[i];
    cout<<"\n"<<mancunian(0,0,k);
	return 0;
}
