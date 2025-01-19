 #include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual string speak()=0;
};
class Dog:public Animal{
    public:
    string speak(){
        return "Bark";
    }
};
class Cat:public Animal{
    public:
    string  speak(){
        return "Meow";
    }

};
 int main(){
    Dog d;
    cout<< d.speak()<<endl;;
    Cat c;
    cout<< c.speak() <<endl;
    return 0;
 }