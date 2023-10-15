#include<iostream>
using namespace std;

int main(){

    int arr[10]={2,3,4,5};
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            break;
        }
    }

    return 0;
}