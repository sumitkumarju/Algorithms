#include<bits/stdc++.h>
using namespace std;
int oppo(int a)
{
    if(a==0)
        return 1;
    else
        return 0;
}
int main()
{

    int a[100]={0};
    for(int i=1;i<=100;i++)
    {
       for(int j=0;j<100;j++)
        if((j+1)%i==0)
            a[j]=oppo(a[j]);
    }
    int c=0;
    for(int j=0;j<100;j++)
    {
        if(a[j]==1)
        {
            cout<<(j+1)<<endl;
            c++;

        }

    }
    cout<<endl;
    cout<<c;
}
