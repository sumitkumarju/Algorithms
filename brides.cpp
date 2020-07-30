#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string bride;
    cin>>bride;
    string groom;
    cin>>groom;
    int count_mg,count_rg;
    count_mg=count_rg=0;
    for(int i=0;i<n;i++)
    {
        if(groom[i]=='r')
             count_rg++;
        else
            count_mg++;

    }
    //cout<<count_mg<<count_rg<<endl;
    int i;
    for(i=0;i<n;i++)
    {
        if(bride[i]=='r')
             count_rg--;
        else
            count_mg--;

        if(count_rg<0||count_mg<0)
            break;



    }
    cout<<n-i;

}
