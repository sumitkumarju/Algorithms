#include<iostream>
#include<math.h>
using namespace std;
long no(int n)
{
	if(n==0)
	 return 0;
    double no=pow(2,n);
	for(int i=1;i<n;i++)
	{
      no=no-(n-i);
	}
	return(long(no));

}
int main() {
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		cout<<no(n)<<endl;
	}
	return 0;
}
