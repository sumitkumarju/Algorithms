#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int ml[1000];
    int mr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    ml[0]=a[0];
    for(int i=1;i<n;i++)
    {
        ml[i]=max(a[i],ml[i-1]);
    }
    mr[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        mr[i]=max(a[i],mr[i+1]);
    }
    int sum=0;
    for(int i=1;i<n-1;i++)
    {
        sum=sum+(min(mr[i],ml[i])-a[i]);
    }
    cout<<sum;



  	return 0;
}

