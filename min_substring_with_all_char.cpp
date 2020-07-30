#include<bits/stdc++.h>
using namespace std;
bool check(map<char,int>m_s1,map<char,int>m_s2)
{
    for(auto i:m_s2)
    {
         if(m_s1[i.first]<i.second)
           return false;
    }
    return true;
}
int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s1;
	    string s2;
	    cin>>s1>>s2;
	    map<char,int>m_s1;
	    map<char,int>m_s2;
	    for(auto s:s2)
	     {
	         m_s2[s]++;
	     }

	    int l=0;int h=s2.length();
	    int min_low=INT_MAX;
	    int min_high;
	    int min_l;
	    for(int i=0;i<s2.length();i++)
        {
            m_s1[s1[i]]++;
        }
	    while(h<s1.length())
	    {

            while(check(m_s1,m_s2))
            {
                int len=h-l+1;
	            if(len<min_l)
	            {
	                min_low=l;
	                min_high=h;
	                min_l=len;
	            }
	            m_s1[s1[l]]--;
	            l++;

            }
            for(int i=min_low;i<=min_high;i++)
            {
                cout<<s1[i];
            }
            cout<<endl;
            m_s1[s1[h]]++;
            h++;
            for(auto i:m_s2)
            {
                cout<<i.first<<" "<<m_s1[i.first]<<" ";

            }
            cout<<endl;

	    }
	    for(int i=min_low;i<=min_high;i++)
	    {
	        cout<<s1[i];
	    }
	    cout<<endl;
	}
	return 0;
}
