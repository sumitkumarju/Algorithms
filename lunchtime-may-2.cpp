#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[6];
        for(int i=0;i<6;i++)
            cin>>a[i];
        int p=a[5];
        int sum=0;
        for(int i=0;i<5;i++)
            sum+=a[i];
        sum*=p;
        if(sum>24*5)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

    return 0;
}

