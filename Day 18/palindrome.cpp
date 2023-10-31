#include<iostream>
using namespace std;

int main()
{
    char str[]={"racecar"};
    int n=7;
    for(int i=0;i<(n/2 +1);i++){
        if(str[i]!=str[n-1-i]){
            cout<<"No";
            return 1;
        }
    }
    cout<<"Yes";
    return 0;
}