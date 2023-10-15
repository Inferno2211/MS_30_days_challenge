#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,-9,1,3,4,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int N=1e6+2;
    int N=10;
    int val[N];

    for(int i=0;i<N;i++)
        val[i]=0;

    for(int i=0;i<n;i++)
        if(arr[i]>0)
            val[arr[i]]=1;
    
    for(int i=1;i<N;i++)
        if(val[i]!=1){
            cout<<i;
            break;
        }
    
    return 0;
}