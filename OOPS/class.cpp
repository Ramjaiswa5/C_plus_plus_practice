#include<iostream>
using namespace std;

class Hero{
    //properties
    public:
    int health;
    char level; 
};

int main(){

    Hero ram;
    ram.health = 520;
    ram.level = 'L';

    cout<<"health is "<<ram.health<<endl;
    cout<<"level is "<<ram.level<<endl;

    return 0;
}