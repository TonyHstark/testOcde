#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age=a;
    }
    void setWeight(int w){
        this ->weight=w;
    }
};

class Male : public Human{
    public:
    string color;
    void sleep(){
        cout<<"Sleeping";
    }
};

int main(){
    Male m;
    cout<<m.age<<endl;
    cout<<m.weight<<endl;
    cout<<m.height<<endl;
    m.setWeight(100);
    cout<<m.weight<<endl;
    m.sleep();
    cout<<endl;
    m.setAge(25);
    cout<<m.age<<endl;

    return 0;
}