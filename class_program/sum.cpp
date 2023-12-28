#include<iostream>
using namespace std;

class sample{   
    public:
    int print(int x, int y){
        return x+y;
    }
};
int main(){
    int a,b,result;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    
    sample ram;
    
    result = ram.print(a,b);
    cout<<"sum is "<<result;

    return 0;
}