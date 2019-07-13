#include<bits/stdc++.h>
using namespace std;

bool sorted_but_rotated(int a[],int s int e,int key)
{
    if(s>e)
        return 0;
    int mid;
    mid=(s+e)/2;
    if(a[mid]==key)
        return 1;
    else
    {
        if(a[s]<a[m])
        {
            if(key>a[s]&&key<a[mid])
                return sorted_but_rotated(a,s,mid-1,key);
            else
                return sorted_but_rotated(a,mid+1,e,key);
        }
        else if(a[mid]<a[e])
        {
            if(key>a[mid]&&key<a[e])
              return sorted_but_rotated(a,mid+1,e,key);
            else
              return sorted_but_rotated(a,s,mid-1,key);

        }
        else
            return 0;
    }

}
int main()
{

    int a[]={6,7,1,2,3,4,5};
    int key;
    cin>>key;
    int n=sizeof(a)/sizeof(int);
    cout<<sorted_but_rotated(a,0,n-1,key);
    return 0;
}
