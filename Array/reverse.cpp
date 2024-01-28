#include<iostream>
using namespace std;

int main() {
    int arr[50];
    int n,temp;
    cout<<"enter the length of an array ";
    cin>>n;
    int s=0, e=n-1;


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The original array "<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after reverse "<<endl;
    
    while(s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}