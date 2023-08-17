#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public :
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHelth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

    //static allocation

    Hero a;
    a.setHelth(80);
    a.setLevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //dynamically 
    Hero *b = new Hero;
    b -> setLevel('A');
    b -> setHelth(70);
    cout<< "level is "<<b->level<<endl;
    cout<<" health is "<<(*b).getHealth()<<endl;

    return 0;
}