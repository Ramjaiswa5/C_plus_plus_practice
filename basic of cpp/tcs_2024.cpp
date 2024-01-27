#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,result;
    int count = 0;
    cout<<"enter ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            for(int k=0;k<n;k++){
                result = (arr[i]+arr[j])/2;
                if(result == arr[k]){
                    count++;
                }
            }
        }
    }
    cout<<count;


}