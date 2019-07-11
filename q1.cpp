#include<bits/stdc++.h>
using namespace std;
int main() {
    static int m;

    int a[m];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    map<int,int>ma;
    for(int i=0;i<m;i++)
    {
        ma[a[i]]++;
    }
    for(int i=0;i<m-1;i++)
    {
      for(int j=i+1;j<m;j++)
      {
        if(ma[target-a[i]-a[j]]>0)
        {
          cout<<a[i]<<"&"<<a[j]<<"&"<<target-a[i]<<endl;
          ma[a[i]]--;
          ma[a[j]]--;
        }
      }



    }

	return 0;
}
