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
        if(s.length()<=10)
            cout<<s<<endl;
        else
        {
            string ans;
            ans+=s[0];
            int len=s.length()-2;
            stringstream ss;
            ss << len;
            string str = ss.str();
            ans+=str;
            ans+=s[s.length()-1];
            cout<<ans<<endl;

        }
    }
    return 0;
}
