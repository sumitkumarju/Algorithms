#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         if(a[i]>0)
            c++;
    }
    if(c>=k)
    {
        sort(a,a+n,greater<int>());
        int r=a[k-1];
        while(r!=0&&a[k++]==r);
        cout<<k-1<<endl;

    }
    else
    {
        int i=0;
        while(a[i]!=0)
            i++;
        cout<<i<<endl;
    }
    return 0;

}
