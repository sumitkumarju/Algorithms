#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    int ms,cs;
    int a[1000000];
    int t;
    cin>>t;
    int b[1000000];
    while(t--)
    {
        cin>>m;

        ms=cs=0;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            b[i+m]=a[i];
            b[i]=a[i];
        }
        for(int i=0;i<2*m;i++)
        {
          cs=cs+b[i];
          if(cs<0)
           cs=0;
          ms=max(ms,cs);
        }
        cout<<ms<<endl;

    }
	return 0;
}
