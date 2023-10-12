#include<iostream>
using namespace std;

int main()
{   int arr[]={1,2,0,7,2,0,2,2,8,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cm=arr[0]-1;
    int count=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]>cm){
            cm=arr[i];
            if(arr[i]>arr[i+1])
            count+=1;
        }
    }   
    cout<<count;
    return 0;
}