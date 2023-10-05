#include<iostream>
using namespace std;

int main()
{   int arr[]={-1,4,-6,7,-3};
    int n=5,cs=0,ms=0;

    for(int i=0;i<n;i++){
        if(cs+arr[i]<0)
            cs=0;
        else
            cs+=arr[i];
        ms=max(ms,cs);
    }
    cout<<ms;
    return 0;
}