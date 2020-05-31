#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       ll a[n];
       ll b[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
       for(int i=0;i<n;i++)
        cin>>b[i];
       ll ax=0;
       ll bx=0;
       ll d=0;
       for(int i=0;i<n;i++)
       {
           if(ax==bx&&a[i]==b[i])
             d+=a[i];
           ax+=a[i];
           bx+=b[i];
       }
       cout<<d<<endl;
   }
}

