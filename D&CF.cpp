#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    if(a>580 && a<=980)
    {
        b=a-580;
        c=980-a;
        if(b<c)
        {
            cout<<"atras "<<b;
        }
        else 
        {
            cout<<"adelante "<<c;
        }

    }
    else if(a>980 && a<1190)
    {
        b=a-980;
        c=1190-a;
        if(b<c)
        {
            cout<<"atras "<<b;
        }
        else 
        {
            cout<<"adelante "<<c;
        }
    }
    else if(a>1190 && a<1250)
    {
        b=a-1190;
        c=1250-a;
        if(b<c)
        {
            cout<<"atras "<<b;
        }
        else 
        {
            cout<<"adelante "<<c;
        }
    }
    else if(a>1250 && a<1420)
    {
        b=a-1250;
        c=1420-a;
        if(b<c)
        {
            cout<<"atras "<<b;
        }
        else 
        {
            cout<<"adelante "<<c;
        }
    }
    else if(a>1420 && a<1520)
    {
        b=a-1420;
        c=1520-a;
        if(b<c)
        {
            cout<<"atras "<<b;
        }
        else 
        {
            cout<<"adelante "<<c;
        }
    }
    else if(a<580 || a>1520) 
    {
         cout<<"error"<<endl;
    } 
    return 0;
}