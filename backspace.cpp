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
        stack<char>st1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#')
                st1.push(s[i]);
            else if(!st1.empty())
                st1.pop();

        }
        string s2;
        cin>>s2;
        stack<char>st2;
        n=s2.length();
        for(int i=0;i<n;i++)
        {
            if(s2[i]!='#')
                st2.push(s2[i]);
            else if(!st2.empty())
                st2.pop();

        }
        if(st1.size()!=st2.size())
        {

            cout<<"False"<<endl;
            continue;
        }
        else
        {
            int flag=1;
            while(!st1.empty())
            {
                if(st1.top()!=st2.top())
                {
                    cout<<"False"<<endl;
                    flag=0;
                    break;

                }
                st1.pop();
                st2.pop();

            }
            if(flag)
            {
                cout<<"True"<<endl;
            }

        }
    }

}

