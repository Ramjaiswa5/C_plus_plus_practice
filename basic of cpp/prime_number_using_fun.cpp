#include <iostream>
using namespace std;
bool isprime(int n){
    for(int i =2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main() {
   int n;
   cout<<"enter the value of n ";
   cin>>n;
   
   if(n>1 && isprime(n)){
       cout<<n<<" is  a prime number"<<endl;
   }
   else{
       cout<<n<<" is not a prime number"<<endl;
   }
}