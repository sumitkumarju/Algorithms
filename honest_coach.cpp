#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int mini=INT_MAX;
        for(int i=1;i<n;i++)
        {
            mini=min(mini,a[i]-a[i-1]);

        }
        cout<<mini<<endl;

    }
    return 0;
}
