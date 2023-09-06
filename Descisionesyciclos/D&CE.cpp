#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%4 == 0 || a%400 == 0)
    {
        cout<<"BISIESTO"<<endl;
    }
    else 
    {
        cout<<"NO BISIESTO"<<endl;
    }
    return 0;
}