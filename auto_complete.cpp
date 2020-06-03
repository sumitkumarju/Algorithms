#include<bits/stdc++.h>
using namespace std;
class node
{
 public:
  char c;
  map<char,node*>m;
  bool isTerminal;
   node(char ch)
   {
	   c=ch;
	   isTerminal=false;
   }
};
class Trie
{
  public:
	node* root;
	Trie()
	{
		root=new node('\0');
	}
  void  insert(string s)
  {
      node* t=root;
      for(int i=0;i<s.length();i++)
      {
          if(t->m.find(s[i])==t->m.end())
          {
              t->m[s[i]]=new node(s[i]);
          }
          t=t->m[s[i]];
      }
      t->isTerminal=true;
  }
  vector<string> search(string s)
  {
      node* t=root;
      for(int i=0;i<s.length();i++)
      {
          if(t->m.count(s[i])==0)
             break;
          t=t->m[s[i]];
      }
      vector<string>v;
      word(s,t,v);
      return v;
  }
    void word(string ans,node* root,vector<string>&v)
    {
        if(root==NULL)
            return;
        if(root->isTerminal)
        {
             v.push_back(ans);
        }
        for(auto k:root->m)
           word(ans+k.first,k.second,v);

    }


};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n];
        Trie root=Trie();
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            root.insert(a[i]);
        }

        string s;
        cin>>s;
        string t;
        for(int i=1;i<=s.length();i++)
        {
            t=s.substr(0,i);
            vector<string>v;
            v=root.search(t);
            if(v.size()==1&&v[0]==s)
                cout<<"0"<<endl;
            else
            {
                for(auto s:v)
                    cout<<s<<" ";
                cout<<endl;

            }


        }



    }
    return 0;
}
