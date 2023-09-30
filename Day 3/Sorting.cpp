#include <iostream>
#include <climits>
using namespace std;
void swap(int* a, int* b){
    int temp=*b;
    *b = *a;
    *a = temp;
}

void display(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int* selectionSort(int* arr,int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
        display(arr,7);
    }
    return  arr;
}

int main(){
    int arr[]={5,69,13,3,22,8,45};

    display(selectionSort(arr,7),7);
}