#include<iostream>
using namespace std;

void input(int arr[],int n){
    cout<<"enter the element of an array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}

void output(int arr[],int n){
    cout<<"the array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int first_index(int arr[],int n,int key){
    int first = 0;
    int last = n;
    int mid = (first + last)/2;
    int ans = -1;

    while(first<last ){
        if(arr[mid]==key){
            ans = mid;
            last = mid - 1;
        }
        else if(arr[mid]>key){
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
        mid = (first + last)/2;
    }
    return ans;
}

int last_index(int arr[],int n,int key){
    int first = 0;
    int last = n;
    int mid = (first + last)/2;
    int ans = -1;

    while(first<last ){
        if(arr[mid]==key){
            ans = mid;
            first = mid + 1;
        }
        else if(arr[mid]>key){
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
        mid = (first + last)/2;
    }
    return ans;
}

int main(){

    int arr[100];
    int n,key;
    cout<<"enter the length of an array"<<endl;
    cin>>n;

    input(arr,n);
    output(arr,n);
    cout<<"enter the key to be found : "<<endl;
    cin>>key;

    cout<<"the first index is : "<<first_index(arr,n,key)<<endl;
    cout<<"the last index is : "<<last_index(arr,n,key)<<endl;

    return 0;
}