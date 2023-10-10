#include<iostream>
using namespace std;

int main()
{
    int arr[]={-4,4,6,-6,10,-11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cs=0,ms=0,ts=0;

    for(int i=0;i<n;i++){
        ts+=arr[i];
        if(cs+=(-arr[i])<0)
            cs=0;
        else    
            cs+=(-arr[i]);
        ms=max(cs,ms);
    }
    cout<<ts+ms;
    return 0;
}