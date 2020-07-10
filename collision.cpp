#include<bits/stdc++.h>
using namespace std;
int main()
{

    int c;
    cin>>c;
    map<double,int>m;
    for(int i=0;i<c;i++)
    {
        int x,y,v;
        cin>>x>>y>>v;

        m[sqrt(x*x+y*y)/v]++;

    }
    int ans=0;
    for(auto i:m)
    {
        ans+=i.second*(i.second-1)/2;

    }
    cout<<ans<<endl;
}
