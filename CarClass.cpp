# include <iostream>
# include <string>
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
void print(Car c){
    cout<<c.name<<" "<<c.power<<" "<<c.mileage<<" "<<bool(c.isE20Compatible)<<endl;
}
int main(){
Car c1; 
c1.name = "Kia Sonet";
c1.power = 118;
c1.mileage = 9.2;
c1.isE20Compatible = true;
Car c2 = {"Toyota Fortuner",200,7.6,false};
Car c3 = {500,"Daytona Charger",12.3,true};
c1.print();
c2.print();
c3.print();
print(c1);
print(c2);
}