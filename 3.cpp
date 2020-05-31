#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n>>x;
        int a[n];
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
             if(a[i]%2==0)
                even++;
             else
                odd++;

        }
        int flag=0;
        if(x<=odd)
        {
            if(x%2==1&&even>=0)
                flag=1;
            else if(x%2==0&&even>=1)
                flag=1;

        }
        else
        {
            if(odd==0)
                flag=0;
            else if(odd%2==1&&(x-odd)<=even)
                flag=1;
            else if(odd%2==0&&(x-odd+1)<=even)
                flag=1;

        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


    }

}
