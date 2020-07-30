#include<bits/stdc++.h>
using namespace std;
int choco(int i,int j)
{
    int maxi=max(i,j);
    int mini=min(i,j);
    //cout<<maxi<<" "<<mini<<endl;
    int c=0;
    while(maxi!=0&&mini!=0)
    {
        int t=maxi-mini;
        c++;
        maxi=max(t,mini);
        mini=min(t,mini);
        //cout<<maxi<<" "<<mini<<endl;

    }
    return c;

}
int main()
{

    int min_l;
    int max_l;
    int min_w;
    int max_w;
    cin>>min_l;
    cin>>max_l;
    cin>>min_w;
    cin>>max_w;
    int c=0;
    for(int i=min_l;i<=max_l;i++)
    {

        for(int j=min_w;j<=max_w;j++)
        {

            c+=choco(i,j);
        }
    }

    cout<<c<<endl;

}
