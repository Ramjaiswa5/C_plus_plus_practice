#include<iostream>
using namespace std;

int hcf(int a,int b) {
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;

}
int main() {
    int a,b;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;

    cout<<"the hcf of "<<a<<" and "<<b<<" is "<<hcf(a,b);
}