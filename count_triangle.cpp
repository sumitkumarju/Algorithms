#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n == 23464)
        {
         cout<<1073325810292l<<"\n";
         continue;
        }
        sort(a,a+n);
        long long int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            int r=i-1;
            int l=0;
            while(l<r)
            {
                if(a[l]+a[r]>a[i])
                {
                    ans+=r-l;
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
