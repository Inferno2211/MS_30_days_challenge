#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,7,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st=0,en=0,sum=12,ts=arr[0];
    
    while(st!=n-1){
        while(ts<sum){
            ts+=arr[++en];
        }
        while(ts>=sum){
            if(ts==sum){
                cout<<st<<" "<<en<<endl;
                if(en!=n-1)
                    ts+=arr[++en];
            }
            ts-=arr[st];
            st++;
        }
    }
    return 0;
}