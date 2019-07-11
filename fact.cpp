#include<iostream>
using namespace std;

int p[100000];
void prime(int n)
{
	p[0]=p[1]=0;
	p[2]=1;
	for(int i=3;i<=n;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=n;i+=2)
	{
		if(p[i])
		{
			for(int j=i*i;j<=n;j+=2*i)
			{
				p[j]=0;
			}
		}
	}
	return;
}
int main() {
	int t;
	cin>>t;
	int a;int b;
	int c;
	while(t--)
	{
	  c=0;
      cin>>a>>b;
	  prime(b);
	  for(int i=a;i<=b;i++)
	  {
		  if(p[i])
		   c++;
	  }
	  cout<<c<<endl;
	}

	return 0;
}
