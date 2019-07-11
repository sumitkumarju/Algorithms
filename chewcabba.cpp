#include<iostream>
using namespace std;
int main() {
	char n[20];
	cin>>n;
	int i=0;
    if(n[i]=='9')
	{
		i++;
	}
	int digit;
	for(;i<20;i++)
	{
		digit=n[i]-'0';
		if(9-digit<5)
		{
			n[i]=(char)(9-digit)+'0';
		}
	}
	cout<<n;
	return 0;
}
