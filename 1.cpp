#include<bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        int f[n];
        int a1,f1;
        vector<pair<int,int>>v;

        for(int i=0;i<n;i++)
        {
            cin>>a1>>f1;
            v.push_back({a1,f1});


        }
        sort(v.begin(),v.end(),comp);

        int p=0;
        int d=0;
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            d=v[i].second/4;
            v[i].second=(v[i].second%4)-(v[i].second%4)%2;
            ans+=(v[i].first)*d*4;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i].second==0)
            {
                pair<int,int>p;
                p=make_pair(v[i].first,v[i].second);
                v.erase(find(v.begin(),v.end(),p));
            }

        }
        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }*/
        //cout<<ans<<endl;
        for(int i=0;i<v.size()-1;i=i+2)
        {
            ans+=2*(v[i].first+v[i+1].first);
            v[i].second=0;
            v[i+1].second=0;

        }
        cout<<ans<<endl;


    }
    return 0;
}
