#include<iostream>
using namespace std;

int main()
{
    //int arr[]={1,2,2};
    int arr[]={5,9,13,3,22,8,45};
    int sum=0;

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i;j<n;j++){
            temp+=arr[j];
            sum+=temp;
        }
    }
    cout<<sum;
    return 0;
}