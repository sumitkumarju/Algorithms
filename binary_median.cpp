/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        ll m;
        cin>>n>>m;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {

            string s;
            cin>>s;
            ll d=0;
            for(char c :s)
            {
              d*=2;
              d+=c-'0';
            }
            v.pb(d);
        }
        sort(v.begin(),v.end());
        ll k = pow(2,m)-n;
        ll idx=(k-1)/2;
        for(ll i:v)
        {
            if(i<=idx)
                idx++;
            else
                break;

        }
        //cout<<idx<<endl;
        string ans="";
        while(idx)
        {

            ans=(char)((idx%2)+'0')+ans;
            idx/=2;
        }
        for(ll i=ans.length()+1;i<=m;i++)
            ans='0'+ans;
        cout<<ans<<endl;


    }

   return 0;
}
