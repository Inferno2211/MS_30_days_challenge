#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[]={1,2,5,3,4,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int val[100];
    for(int i=0;i<100;i++)
        val[i]=-1;

    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(val[arr[i]]==-1)
            val[arr[i]] = i;
        else 
            ans=min(ans,val[arr[i]]);
    }
    cout<<ans;
    return 0;
}