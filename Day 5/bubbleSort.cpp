#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
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

int* bubbleSort(int* arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
        display(arr,7);
    }
    return arr;
}

int main(){
    int arr[]={5,69,13,3,22,8,45};

    display(bubbleSort(arr,7),7);
    return 0;
}