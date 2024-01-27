
// element of an array should be equal or greater from all the element of its right side

#include<iostream>
using namespace std;

int main() {
    int data[50];
    int n;
    cout<<"enter the size of an array ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>data[i];
    }

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=i;j<n;j++){
            if(data[i]<data[j]){
                count ++;
                break;
            }
            
        }
        if(count == 0){
            cout<<data[i]<<" ";
        }
    }

    return 0;
}