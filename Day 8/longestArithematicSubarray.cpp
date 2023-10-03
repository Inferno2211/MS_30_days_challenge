#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,7,4,6,8,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    int pd,ans=0,curr=0;

    for(int i=0;i<n-1;i++){
        int cd=arr[i+1]-arr[i];
        if(pd==cd){
            curr++;
            ans=max(ans,curr);
        }
        else{
            pd=cd;
            curr=2;
        }
    }
    cout<<ans;
    return 0;
}