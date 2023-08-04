#include<iostream>
using namespace std;

void stairs(int start, int end){
    cout<<start<<endl;
    if(start == end){
        cout<<"Reached";
        return ;
    }
    start++;
    stairs(start,end);

}

int main(){
    int start,end;
    cin>>start;
    cin>>end;
    
    stairs(start,end);

    return 0;
}