#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int h=2*n;
    long long int max_j=h/27;
    long long int min_j=1;
    long long int i;
    long long int remaining=0;
    for(i=max_j;i>=1;i--)
    {
        remaining=h-i*27;
        if(remaining>=i)
            break;

    }
    if(i==0)
        cout<<"-1"<<" "<<"-1"<<" "<<"-1"<<endl;
    else
        cout<<i<<" "<<i<<" "<<(remaining-i)*17<<endl;
    return 0;

}
