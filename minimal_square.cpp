#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pow(max(2*min(l,r),max(l,r)),2)<<endl;

    }

}
