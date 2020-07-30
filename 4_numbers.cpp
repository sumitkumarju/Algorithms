#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;int ans;
	    cin>>n>>ans;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    set<string>se;
	    for(int i=0;i<n-3;i++)
	    {
	        for(int j=i+1;j<n-2;j++)
	        {
	            int l=j+1;
	            int r=n-1;
	            int target=ans-a[i]-a[j];
	            while(l<r)
	            {
	                if(a[l]+a[r]<target)
	                {
	                    l++;
	                }
	                else if(a[l]+a[r]>target)
	                {
	                    r--;
	                }
	                else
	                {
	                    string s=to_string(a[i])+" "+to_string(a[j])+" "+to_string(a[l])+" "+to_string(a[r])+" $";
    	                if(se.find(s)==se.end())
    	                {
    	                        cout<<s;
    	                        se.insert(s);
    	                }
    	                l++;h--;
	                }

	            }

	        }
	    }
	    cout<<endl;
	}
	return 0;
}
