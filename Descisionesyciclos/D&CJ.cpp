#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c1=0,c2=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a%2==0)
        {
            c1++;
        }
        else if(a==2 || a%2!=0)
        {
            c2++;
        }
    }
    cout<<c1<<" "<<c2<<endl;
    return 0;
}