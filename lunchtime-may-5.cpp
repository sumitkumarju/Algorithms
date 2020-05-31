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
        map<int,vector<int>>m;
        map<int,int>m1;
        string a;
        string b;
        cin>>a>>b;
        for(int i=0;i<26;i++)
            m1[i]=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                m[b[i]-'a'].push_back(i);

            }
            else
            {

               m1[b[i]-'a']=i;
            }
            //size_t found = a.find(b[i]);
            //if (found != string::npos)
             // m1[b[i]-'a']=found;

        }
        int count=0;
        bool flag=1;
        bool change[26];
        memset(change,false,sizeof(change));
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i]&&!change[b[i]-'a'])
            {
               int idx=m1[b[i]-'a'];
               if(idx==-1)
               {
                   flag=0;
                   break;
               }
               change[b[i]-'a']=true;
               m[b[i]-'a'].push_back(idx);
               count++;
            }
            else if(a[i]<b[i])
            {
                flag=0;
                break;


            }

        }
        if(flag==0)
            cout<<"-1"<<endl;
        else
        {
            cout<<count<<endl;
            for(int i=0;i<26;i++)
            {
                if(change[i])
                {
                    cout<<m[i].size()<<" ";
                    for(int j=0;j<m[i].size();j++)
                    {
                        cout<<m[i][j]<<" ";
                        //change[m[i][j]]=false;
                    }
                    cout<<endl;

                }

            }


        }

    }
    return 0;
}
