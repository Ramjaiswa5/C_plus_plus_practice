#include<iostream>
using namespace std;

int main() {

    int arr[100];
    int length,target;

    cout<<"enter the length of an array "<<endl;
    cin>>length;

    cout<<"enter the elemet of an array "<<endl;
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }

    cout<<"the array is : "<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"enter the target :"<<endl;
    cin>>target;

    int first = -1,last = -1;
    for(int i=0; i<length;i++){
        if(arr[i]==target){
            first=i;
            break;
        }
    }
   
    for(int i=length; i>=0;i--){
        if(arr[i]==target){
            last=i;
            break;
        }
    }

    cout<<"first index is : "<<first<<endl;
    cout<<"last index is : "<<last<<endl;

    return 0;

}