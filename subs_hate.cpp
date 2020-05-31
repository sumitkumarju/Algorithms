#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();

        int dp1[n];
        int dp0[n];

        memset(dp1,0,sizeof(dp1));
        memset(dp0,0,sizeof(dp0));

        if(s[0]=='0')
        {
            dp0[0]=1;
            dp1[0]=0;

        }
        else if(s[0]=='1')
        {
            dp0[0]=0;
            dp1[0]=1;

        }

        for(int i=1;i<n;i++)
        {
            if(s[i]=='0')
            {
                dp0[i]=dp0[i-1]+1;
                dp1[i]=dp1[i-1];

            }
            else if(s[i]=='1')
            {
                dp0[i]=dp0[i-1];
                dp1[i]=dp1[i-1]+1;

            }

        }
        int m1=INT_MAX;
        int zeroafter=0;
        int count1=0;
        for(int i=0;i<n;i++)
        {

            if(s[i]=='1')
                count1++;
            zeroafter=dp0[n-1]-dp0[i];
            m1=min(m1,count1+zeroafter);
        }

        int m2=INT_MAX;
        int oneafter=0;
        int count0=0;
        for(int i=0;i<n;i++)
        {

            if(s[i]=='0')
                count0++;
            oneafter=dp1[n-1]-dp1[i];
            m2=min(m2,count0+oneafter);
        }

        cout<<min(m1,m2)<<endl;


    }

}
