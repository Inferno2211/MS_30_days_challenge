#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,9,13,3,22,8,45};
    int max=arr[0];
    for(int i=0;i<7;i++){
        if (max < arr[i])
            max=arr[i];
        cout<<max<<" ";
    }
    return 0;
}