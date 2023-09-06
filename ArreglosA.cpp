#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr1[N];
    int arr2[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<N; i++)
    {
        cin>>arr2[i];
    }
    for(int i=0; i<N; i++)
    {
        arr1[i] += arr2[i];
    }
    for(int i=0; i<N; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}