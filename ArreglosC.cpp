#include <iostream>
using namespace std;
int main()
{
    int N,MN,MX,aux=0,aux2;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    cin>>MN>>MX;
    aux=arr[(MN+1)];
    for(int i=MN; i<MX; i++)
    {
        if(i-MN==-1)
        {
            break;
        }
        else
        {
            if(arr[i]<arr[i+1])
            {
                aux2=i;
            }
        }
    }
    cout<<aux2;
    return 0;
}