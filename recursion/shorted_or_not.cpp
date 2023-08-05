#include<iostream>
using namespace std;


bool sorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return sorted(arr + 1, size - 1);
    }
}

int main(){
    int array[5] = {1,2,3,4,5};
    int size = 5;

    int ans = sorted(array,size);

    if(ans){
        cout<<"the array is sorted "<<endl;
    }
    else{
        cout<<"the is not sorted"<<endl;
    }
}