#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int a[100][100];
    cin>>m;
    cin>>n;
    int flag=0;
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sn;
    cin>>sn;
    int l=0;
    int h=m-1;
    int mid=0;
    while(l<h)
    {
        mid=(l+h)/2;
        if(sn>a[mid][0])
        {
            l=mid+1;
        }
        else if(sn<a[mid][0])
        {
            h=mid-1;
        }
        else
        {
            cout<<"1"<<endl;
            flag=1;
            break;
        }
    }
    l=0;
    h=n-1;
    int mid1;
    while(l<h)
    {
        mid1=(l+h)/2;
        if(sn>a[mid][mid1])
        {
            l=mid1+1;
        }
        else if(sn<a[mid][mid1])
        {
            h=mid1-1;
        }
        else
        {
            cout<<"1"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0)
      cout<<"0"<<endl;

	return 0;
}
