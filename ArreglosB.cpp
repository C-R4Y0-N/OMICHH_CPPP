#include <iostream>
using namespace std;
int main()
{
    int N,B,aux=0,sum=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    cin>>B;
    for(int i=0; i<N; i++)
    {
        sum+=arr[i];
        if(sum==B)
        {
            aux++;
        }
    }
    cout<<aux;
    return 0;
}