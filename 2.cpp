#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    int d[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    int ans =INT_MIN;
    int curr;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            curr=abs(a[i]-a[j])+abs(b[i]-b[j])+abs(c[i]-c[j])+abs(d[i]-d[j])+abs(i-j);
            ans=max(ans,curr);
        }
    }
    cout<<ans<<endl;
    return 0;
}
