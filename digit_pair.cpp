#include<bits/stdc++.h>
using namespace std;
int max_digit(int d)
{
    int max_digit=0;
    while(d>0)
    {
        max_digit=max(max_digit,d%10);
        d=d/10;

    }
    return max_digit;

}
int min_digit(int d)
{
    int max_digit=9;
    while(d>0)
    {
        max_digit=min(max_digit,d%10);
        d=d/10;

    }
    return max_digit;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        int maxi=max_digit(d);
        int mini=min_digit(d);
        maxi*=11;
        mini*=7;
        int res=maxi+mini;
        if(res>=100)
        {
            res%=100;
        }
        a[i]=res;

    }
    map<int,int>m_odd;
    map<int,int>m_even;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        if((i+1)%2==0)
            m_even[a[i]/10]++;
        else
            m_odd[a[i]/10]++;

    }
    cout<<endl;
    int ans=0;
    for(auto i:m_even)
    {
        cout<<i.first<<" ";
        if(i.second>=4)
            ans+=2;
        else if(i.second>=2)
            ans+=1;


    }
    cout<<endl;
    for(auto i:m_odd)
    {
        cout<<i.first<<" ";
        if(i.second>=4)
            ans+=2;
        else if(i.second>=2)
            ans+=1;


    }
    cout<<ans<<endl;
    return 0;


}
