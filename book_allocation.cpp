#include<bits/stdc++.h>
using namespace std;
bool possible(long long int a[],long long int mid,long long int n,long long int c)
{
    long long int sum=0;
    long long int cs=1;
    for(long long int i=0;i<n;i++)
    {
        if(sum+a[i]<=mid)
        {
            sum+=a[i];

        }
        else
        {
            cs++;
            sum=a[i];
        }
        if(cs>c)
            return 0;

    }
    return 1;

}
/*bool possible(long long int a[],long long int mid,long long int n,long long int c)
{
    long long int students=0;
    long long int current_pages=0;
    for(long long int i=0;i<n;i++)
    {
        if(current_pages+a[i]>mid)
        {
            current_pages=a[i];
            students++;
            if(students>c)
            {
                return false;
            }
        }
        else
        {
            current_pages+=a[i];
        }
    }
    return true;
}*/
long long int book_allocation(long long int a[],long long int n,long long int c)
{

    long long int s=0;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum+=a[i];
        s=max(s,a[i]);
    }

    long long int e=sum;
    long long int ans;
    long long int mid;
    while(s<=e)
    {
         mid=(s+e)/2;
        if(possible(a,mid,n,c))
        {
            e=mid-1;
            ans=mid;
        }
        else
        {
            s=mid+1;
        }

    }
    return ans;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {


        long long int n;
        cin>>n;
        long long int c;
        cin>>c;
        long long int a[n];
        for(long long int i=0;i<n;i++)
            cin>>a[i];
        cout<<book_allocation(a,n,c)<<endl;
    }

}
