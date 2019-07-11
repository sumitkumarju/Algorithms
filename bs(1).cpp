#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={5,1,1,1,9,7,1,3,2,9,4,3,6,8};
    int n=sizeof(a)/sizeof(int);
    int lo=0;
    int high=n-1;
    int mid;
    int s=3;
    int ans;
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    while(lo<=high)
    {
        mid=(lo+high)/2;
        if(s<a[mid])
            high=mid-1;
        else if(s>a[mid])
            lo=mid+1;
        else
        {

            lo=mid+1;
            ans=mid;

        }

    }
    cout<<ans;


}
