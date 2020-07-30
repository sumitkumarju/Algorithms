#include<bits/stdc++.h>
using namespace std;
int operate(int n,int curr)
{
    if(curr>n)
    {
        return INT_MAX;
    }
    if(n==curr)
    {
        return 0;
    }

    return 1+min(operate(n,curr+1),operate(n,curr*2));
}
int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<1+operate(n,1)<<endl;
	}
	return 0;
}
