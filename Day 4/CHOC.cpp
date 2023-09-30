#include <iostream>
using namespace std;

int main(){
    int n,choc,wrapper=0;
    cin>>n;
    choc=n;
    wrapper=n;

    while(wrapper>=3){
        choc+=wrapper/3;
        wrapper=wrapper/3 + wrapper%3;
    }
    cout<<choc;
    
    return 0;
}