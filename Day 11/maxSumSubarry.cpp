#include<iostream>
using namespace std;

int main()
{   
    int arr[]={-1,4,7,2,5,6};
    int msum=0,st=0,en=0;
    int ts=arr[0],ms,me;

    int n=sizeof(arr)/sizeof(arr[0]);
    while(st!=n-1){
        if(ts>msum){
            ms=st;
            me=en;
            msum=ts;
        }
        if(en<n-1)
            ts+=arr[++en];
        else{
            ts-=arr[st++];
            while(en!=st)
                ts-=arr[en--];
        }
        //cout<<ts<<": "<<st<<" "<<en<<endl;
    }
    cout<<ms<<" "<<me;

    return 0;
}