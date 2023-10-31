#include<iostream>
using namespace std;

int main()
{
    char str[]={"hi thi issa testo"};
    int max=0,i=0,cur=0,st=0,maxst;
    while(str[i] != '\0'){
        if (str[i]==' '){
            if(cur>max){
                max=cur;
                maxst = st;
            }
            cur=0;
            st=i+1;
        }
        else if(str[i+1] == '\0'){
            cur++;
            if(cur>max){
                max=cur;
                maxst = st;
            }
            cur=0;
            st=i+1;
        }
        else
            cur++;
        i++; 
    }
    for(int i=0;i<max;i++){
        cout<<str[i+maxst];
    }

    return 0;
}