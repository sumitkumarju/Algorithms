#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>v,int n,int k,int index)
{
    //Base
    if(n==1)
    {

        return v[0];
    }

    //hypothesis
    int danger_idx=(index+k)%v.size();
    cout<<danger_idx<<" ";
    v.erase(v.begin()+danger_idx);
    return solve(v,n-1,k,danger_idx);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        k--;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {

            v.push_back(i);
        }
        cout<<solve(v,n,k,0)<<endl;
    }

}
