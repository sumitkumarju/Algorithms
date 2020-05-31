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
        int x;
        cin>>x;
        int u,v;
        int deg[n+1];
        memset(deg,0,sizeof(deg));
        for(int i=1;i<=n-1;i++)
        {
            cin>>u>>v;
            deg[u]++;
            deg[v]++;

        }
        if(deg[x]<=1)
        {
            cout<<"Ayush"<<endl;
        }
        else
        {
            if(n%2==1)
            {
                cout<<"Ashish"<<endl;
            }
            else
            {

                cout<<"Ayush"<<endl;
            }

        }
    }

}
