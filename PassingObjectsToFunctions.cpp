# include <iostream>
using namespace std;
class Car{ // user defined data type

public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    Car(){

    }
    Car(int p,string n,float m,bool f){
        name = n;
        power = p;
        mileage = m;
        isE20Compatible = f;
    }
    Car(string n,int p,float m,bool f){
        name = n;
        power = p;
        mileage = m;
        isE20Compatible = f;
    }
    void print(){
        cout<<name<<" "<<power<<" "<<mileage<<" "<<bool(isE20Compatible)<<endl;
    }

};
void change1(Car& c){
    c.name = "Dodge Challenger";
}
void change2(Car c){
    c.name = "Dodge Challenger";
}
int main(){
    Car c("Dodge Charger",1234,77.9,true);
    change2(c);
    c.print();
    change1(c);
    c.print();

}