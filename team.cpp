#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    int c=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int count=0;
         cin>>a[i][0]>>a[i][1]>>a[i][2];
         sum+=a[i][0]+a[i][1]+a[i][2];
         if(sum>=2)
            c++;
    }
    cout<<c<<endl;


}
