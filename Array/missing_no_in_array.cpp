#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){

    int arr[10];
    int n;
    cout<<"enter the length of an array :"<<endl;
    cin>>n;
    cout<<"enter the element of an array :"<<endl;

    for(int i=1; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);

    for(int i=0;i<=n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            break;
        }
    }

    return 0;
}