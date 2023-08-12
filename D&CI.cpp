#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,suma;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        suma=suma+(a*b);
    }
    cout<<suma;
    return 0;
}