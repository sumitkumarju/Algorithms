#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void pos()
{
    int len,position;
    int curr=0;
    int max_count=0;
    int pre_zero=-1;
    int pre_pre_zero=-1;
    for(curr=0;curr<n;curr++)
    {
        if(a[curr]==0)
        {
            len=curr-pre_pre_zero;
            if(len>max_count)
            {
                max_count=len;
                position=pre_zero;

            }
            pre_pre_zero=pre_zero;
            pre_zero=curr;

        }

    }
    if(curr-pre_pre_zero>max_count)
    {
        position=pre_zero;
    }
    cout<<"MAXLENGTH"<<max_count;
    cout<<"POSITION"<<position;

}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    pos();
}
