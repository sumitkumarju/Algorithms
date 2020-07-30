#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        string obr;
        int min_length=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i].length()<=min_length)
            {
                min_length=arr[i].length();
                obr=arr[i];
            }
        }
        //cout<<obr<<endl;
        int ans=0;
        int flag=1;
        for(int i=0;i<min_length;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]!=obr[i])
                {

                    flag=0;

                    break;
                }
            }

            if(flag==0)
            {
                break;
            }
            ans+=1;

        }
        cout<<obr.substr(0,ans)<<endl;

    }
	return 0;
}
