#include<iostream>
using namespace std;
int main()
{

    int a[]={1,2,3,4,5,6,7,8,9,0};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i+=2)
    {

        if(i>0 && a[i-1]>a[i])
            swap(a[i-1],a[i]);
        if(i<n-1&&a[i+1]>a[i])
            swap(a[i+1],a[i]);
    }
    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
    return 0;

}
