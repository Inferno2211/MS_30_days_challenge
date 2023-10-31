#include<iostream>
using namespace std;

int main()
{
    int arr [4][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};

    int target=4;
    int i=0,j=3;

    while(i<4 && j<4){
        int cur=arr[i][j];
        if(target == cur){
            cout<<i<<","<<j;
            return 0;
        }
        if(target>cur)
            i++;
        if(target<cur)
            j--;
    }
    cout<<"No";
    return 1;
}