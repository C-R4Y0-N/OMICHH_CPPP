#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>10 && b>10)
    {
        cout<<"A y B son mayores a 10"<<endl;
    }
    if(a>15)
    {
        cout<<"A es mayor a 15"<<endl;
    }
    if(b>15)
    {
        cout<<"B es mayor a 15"<<endl;
    }
    if (a == b)
    {
        cout<<"A y B son iguales"<<endl;
    }
    else
    {
        cout<<"A y B son diferentes"<<endl;
    }
    return 0;
}