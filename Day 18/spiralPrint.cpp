#include<iostream>
using namespace std;

int main()
{
    int arr[4][5]={{1,2,3,4,5},
                   {6,7,8,9,10},
                 {11,12,13,14,15},
                 {16,17,18,19,20}};
    int r_start=0,c_start=0,r_end=sizeof(arr)/sizeof(arr[0]),c_end=sizeof(arr[0])/sizeof(arr[0][0]);
    
    while(r_start<r_end && c_start<c_end){
        for(int j=c_start;j<c_end;j++)
            cout<<arr[r_start][j]<<" ";
        r_start++;

        for(int i=r_start;i<r_end;i++)
            cout<<arr[i][c_end-1]<<" ";
        c_end--;

        for(int j=c_end-1;j>c_start;j--)
            cout<<arr[r_end-1][j]<<" ";
        r_end--;

        for(int i=r_end;i>=r_start;i--)
            cout<<arr[i][c_start]<<" ";
        c_start++;
    }
    return 0;
}