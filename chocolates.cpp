#include<bits/stdc++.h>
using namespace std;
int check(string a[],int n,int l,int r,char c)
{
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        for(auto s:a[i])
        {
            if(s==c)
              ans++;

        }

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];

    }
    int x,y;
    cin>>x>>y;
    int l=0;
    int r=0;
    int ans=0;
    while(r<n)
    {
        if(check(a,n,l,r,'M')<=x&&check(a,n,l,r,'D')<=y)
        {
            ans=max(ans,r-l+1);
            r++;
        }
        else
            l++;


    }
    cout<<ans<<endl;

}
