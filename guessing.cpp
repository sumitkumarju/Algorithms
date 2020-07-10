#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    int flag;
    for(int i=1;i<=240;i++)
    {
        cout<<"-1"<<"\n";
        cin>>c;
        if(c=='L')
        {
            flag=i%2;
        }
    }
    int l=1;
    int h=n;
    while(l<=h)
    {
        int mid=(l+h)/2;
        char a[2];
        for(int i=0;i<=1;i++)
        {
            cout<<mid<<"\n";
            fflush(stdout);
            cin>>a[i];
            if(a[i]=='E')
             return 0;
        }
        if(a[0]==a[1])
        {
            char c=a[0];
            if(c=='G')
             l=mid+1;
            else if(c=='L')
             h=mid;
        }
        else
        {
            char c=a[flag];
            if(c=='G')
             l=mid+1;
            else if(c=='L')
             h=mid;

        }

    }


}
