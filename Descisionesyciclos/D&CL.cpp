#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x=0,y=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}