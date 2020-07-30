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
        string ans="";


        int arr[1000];
        int i=0;
        while(n)
        {
            arr[i++]=n%26;
            n/=26;

        }
        for(int j=0;j<i-1;j++)
        {
            if(arr[j]<=0)
            {
               arr[j]+=26;
               arr[j+1]=arr[j+1]-1;
            }


        }
        for(int j=0;j<i;j++)
        {
            if(arr[j]>0)
                ans=(char)(arr[j]-1+'A')+ans;

        }
        cout<<ans<<endl;
    }

}

