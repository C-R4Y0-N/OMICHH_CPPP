#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c=0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>a;
        if(a>c)
        {
            c=a;
        }
    }
    cout<<c;
    return 0;
}