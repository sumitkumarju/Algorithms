#include<bits/stdc++.h>
using namespace std;
#define long long ll
int main()
{
    char no[20];
    cin>>no;
    int x=strlen(no);
    int ans= pow(2,x)-2;
    int k=0;
    for(int i=x-1;i>=0;i--)
    {
        if(no[i]=='7')
        {
            ans+=pow(2,k);
        }
        k++;

    }
    cout<<ans+1;

}
