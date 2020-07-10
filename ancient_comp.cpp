#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll log1 (ll base, ll x) {
    if(x==0)
        return 0;
    return (log(x) / log(base));
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll a;ll b;
        cin>>a>>b;
        ll t=a/b;
        bool flag=1;
        if(a<b)
        {

            t= (b/a);
            if(t==1||(t&(t-1)))
            {
             cout<<"-1"<<endl;
             flag=0;
            }

        }
        else if(a>b)
        {
            t= (a/b);
            if(t==1||(t&(t-1)))
            {
                cout<<"-1"<<endl;
                flag=0;
            }


        }
        if(flag)
        {

                 ll c=log2 (t);
                 if(c%3==0)
                    cout<<(c/3)<<endl;
                 else
                    cout<<c/3+1<<endl;



        }

    }
    return 0;
}
