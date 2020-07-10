#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="abcdef";
    char*p=s;
    cout<<*p++<<endl;
    *p++=*++p;
    cout<<s;
    return 0;

}
