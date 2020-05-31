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
        string s[n];
        for(int i=0;i<n;i++)
        {
          cin>>s[i];
        }
        int flag=1;
        for(int i=0;i<n-1;i++)
        {

            for(int j=0;j<n-1;j++)
            {
                if(s[i][j]=='1')
                {
                    if(s[i][j+1]!='1'&&s[i+1][j]!='1')
                    {
                        flag=0;
                        break;
                    }

                }

            }
        }
        if(flag)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }

}
