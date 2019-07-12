#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int n,c;
bool possible(int mid)
{
    int cn=1;
    int prevpos=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]-prevpos>=mid)
        {
            cn++;
            if(cn==c)
                return 1;
            prevpos=a[i];
        }
    }
    return 0;

}
int maxdist()
{
    sort(a.begin(),a.end());
    int l=0;
    int h=a[n-1]-a[0];
    int mid;
    int ans;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(possible(mid))
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            h=mid-1;
        }

    }
    return ans;

}
int main()
{
    int t;
    cin>>t;
    int pos;
    while(t--)
    {
     cin>>n>>c;
     for(int i=0;i<n;i++)
     {
         cin>>pos;
         a.push_back(pos);
     }
     cout<<maxdist();
    }
    return 0;
}
