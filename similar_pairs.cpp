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
        ll a[n];
        ll odd,even;
        odd=even=0;
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
             if(a[i]%2==0)
                even++;
             else
                odd++;
        }



        bool flag=0;
        if(odd%2==0&&even%2==0)
            flag=1;
        else if(odd%2==1&&even%2==1)
        {
             sort(a,a+n);
             for(int i=0;i<n-1;i++)
             {
                if((a[i]^a[i+1])%2==1)
                {
                    if(a[i+1]-a[i]==1)
                    {
                        flag=1;
                        break;

                    }

                }

             }
        }

        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
