#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int k=30;
    
    int st=0,en=sizeof(arr)/sizeof(arr[0]);

    while(st<en){
        int sum=arr[st]+arr[en];
        if(k==sum){
            cout<<st<<" "<<en;
            return 0;
        }
        else if(sum<k)
            st++;
        else
            en--;
    }
    return 0;
}