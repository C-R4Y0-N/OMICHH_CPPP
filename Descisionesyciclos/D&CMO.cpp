#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,c=0,b=1;
    cin>>n;
    while(c<n)
    {
        c=a+b;
        cout<<c;
        a=c;
        c=b;
    }
   return 0;
}