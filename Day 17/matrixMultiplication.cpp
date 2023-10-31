#include<iostream>
using namespace std;

int main()
{
    int arr1[3][2]={{1,2},{4,5},{7,8}};
    int arr2[2][3]={{1,2,3},{4,5,6}};
    int res[3][3]={0};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                    res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}